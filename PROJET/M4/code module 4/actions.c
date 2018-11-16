#include <stdio.h>
#include <stdlib.h>
#include "donnees.h" // On inclue les en-tête
#include "actions.h"
#include <windows.h> // Utilisé pour la fonction color
#include <math.h>
int Nb_ligne() // Fonction pour le calcul de lignes
{
    FILE *pouls = fopen("pouls.csv", "r"); // on ouvre le fichier
    int Nbligne=0;
    int c;
    while((c=fgetc(pouls)) !=EOF) // Tant que c parcout le fichier (et donc n'est pas à la fin)
    {
        if (c=='\n') // Si c est égal à un retour à la ligne
        {
            Nbligne++; // On ajoute 1 ligne au nombre de lignes
        }
    }
    return (Nbligne+1); // On retourne le nombre de ligne, plus 1 puisque à la ligne de  fin, il n'y a pas de retour à la ligne
}


void Afficher_brut() // Fonction pour afficher les données comme elles sont
{
    CSV* csv;
    csv = calloc(Nb_ligne(), sizeof(CSV));
    Lire_CSV(csv);
    int j;
    for(j=0; j<Nb_ligne(); j++)
    {
        printf("Temps = %d Pouls = %d\n",csv[j].Temps, csv[j].Pouls); // On affiche les données
    }
}


int Trier_Temps_croissant (const void *a,const void  *b) // Fonction pour trier le temps de manière croissante
{
    CSV *csvA = (CSV *)a;
    CSV *csvB = (CSV *)b;
   return ( csvA->Temps - csvB->Temps );
}


int Trier_Temps_decroissant (const void *a,const void  *b) // Fonction pour trier le temps de manière décroissante
{
    CSV *csvA = (CSV *)a;
    CSV *csvB = (CSV *)b;
   return ( csvB->Temps - csvA->Temps );
}


int Trier_Pouls_croissant (const void *a,const void  *b)
{
    CSV *csvA = (CSV *)a;
    CSV *csvB = (CSV *)b;
   return ( csvA->Pouls - csvB->Pouls );
}

int Trier_Pouls_decroissant (const void *a,const void  *b)
{
    CSV *csvA = (CSV *)a;
    CSV *csvB = (CSV *)b;
   return ( csvB->Pouls - csvA->Pouls );
}

int Recherche () // Fonction de recherche dichotométrique
{
    CSV* csv;
    csv = calloc(Nb_ligne(), sizeof(CSV));
    Lire_CSV(csv);
    int val;// Valeur recherchée
    int position;// Position valeur
    int inf, mil, sup; // valeur inférieure, milieu, supérieure de la liste
    printf("Entrez la valeur %c rechercher\n", 133);
    scanf("%d", &val);// L'utilisatuer rentre la valeur à rechercher
    position=-1;
    inf = 0;
    sup= Nb_ligne();
    while ((inf<=sup) && (position==-1))
    {
        mil=(inf+sup)/2; //On calcule le milieu
        if (val<csv[mil].Temps)
        {
            sup=mil-1;
        }
        else if (val>csv[mil].Temps)
        {
            inf=mil+1;
        }
        else
        {
            position=mil;
        }
    }
    if (position==-1)
    {
        printf("Il n'y a pas cette valeur dans la liste");
    }
    else
    {
        printf("La valeur %d se trouve %c la position %d\n", val, 133, position);
        printf("\nLe pouls associ%c est donc %d\n", 130, csv[position].Pouls);
    }
}

int Min_Max() // Fonction pour afficher le maximum et minimum de Poul
{
    CSV* csv;
    csv = calloc(Nb_ligne(), sizeof(CSV));
    Lire_CSV(csv);
    qsort(csv,Nb_ligne(), sizeof (CSV),Trier_Pouls_croissant ); // On trie le poul de manière croissante
    printf("\nLe pouls minimum est : %d et le temps associ%c est :%d\n", csv[0].Pouls, 130, csv[0].Temps); // On afficher le premier terme, soit le minimum et le temps associé
    printf("\nLe pouls maximum est : %d et le temps associ%c est :%d\n", csv[Nb_ligne()-1].Pouls, 130, csv[Nb_ligne()-1].Temps); // Même chose pour le maximum
}
void color(int t,int f) // Fonction pour changer la couleur
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}

double Moyenne() // Fonction pour calculer la moyenne
{
    CSV* csv;
    csv = calloc(Nb_ligne(), sizeof(CSV));
    Lire_CSV(csv);
    int c;
    double G=0;
    int d=0;
    printf("Pendant combien de seconde?");
    scanf("%d",&c);
    for(d=0;d<c;d++) // Tant que d sera inférieur au nombre de secondes saisie
    {
     G=G+csv[d].Temps; // On ajoute une valeur du tableau à G en l'additionnant aux précédentes
    }
    G=G/c; // On divise la somme par le nombre de termes
    return(G); // On retourne la moyenne
}
