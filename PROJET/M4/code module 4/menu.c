#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "actions.h"
#include "donnees.h"

void affichage_menu () // Fonction principale
{
    int continuer=1; // Variable pour la boucle do...while
    do // Do de la boucle do...while
    {
        int Couleur_texte;// Variable pour la couleur du texte
        int Couleur_fond;// Variable pour la couleur de fond
        int Choix; // Variables pour les choix d'action
        int Choix_tri;
        int Choix_croissant;
        printf("------------------------------Bienvenue sur le HeXart Care------------------------------\n"); //Affichage du menu
        printf("\n1. Afficher les donn%ces\n", 130);
        printf("2. Afficher les donn%ces tri%ces\n", 130,130);
        printf("3. Rechercher une donn%ce pour un temps donn%c\n", 130,130);
        printf("4. Afficher la moyenne de pouls dans le temps donn%c\n", 130);
        printf("5. Afficher le nombre de lignes en m%cmoire\n", 130);
        printf("6. Rechercher le max/min de pouls\n");
        printf("7. Quitter l'application\n");
        printf("8. Changer la couleur du texte\n");
        scanf("%d", &Choix); // L'utilisateur saisie son choix
        switch (Choix)
        {
        case 1 : // Si choix = 1
            Afficher_brut(); // Appel fonction pour l'affichage de données
            break; // Fin du cas 1

        case 2 : // Si choix = 2
            printf("\n1. Trier par Temps\n");
            printf("2. Trier par Pouls\n");
            scanf("%d", &Choix_tri); // L'utilisateur rentre son choix
            if (Choix_tri==1) // S 'il fait le premier choix
            {
                printf("\nVoulez vous trier de mani%cre croissante ou d%croissante ?\n", 138, 130);
                scanf("%d", &Choix_croissant); // Autre choix
                if (Choix_croissant==1) // Si le 2nd choix est égal 1
                {
                    int i;
                    CSV* csv; //On initialise un pointeur pour la structure
                    csv = calloc(Nb_ligne(), sizeof(CSV)); // On alloue de la mémoire pour un tableau de la taille du nombre de ligne
                    Lire_CSV(csv); // Appel fonction pour inscrire dans la structure
                    qsort(csv,Nb_ligne(), sizeof (CSV),Trier_Temps_croissant ); // Focntion tri rapide du temps dans l'ordre croissant
                    for (i=0; i<Nb_ligne(); i++)
                    {
                        printf("Temps = %d , Pouls= %d\n", csv[i].Temps, csv[i].Pouls); // Affichage des données de Temps triées et de Poul
                    }
                }
            else
            {
                int j;
                CSV* csv;
                csv = calloc(Nb_ligne(), sizeof(CSV));
                Lire_CSV(csv);
                qsort(csv,Nb_ligne(), sizeof (CSV),Trier_Temps_decroissant ); // Même chose que la précédente en décroissant
                for (j=0; j<Nb_ligne(); j++)
                    {
                        printf("Temps = %d , Pouls= %d\n", csv[j].Temps, csv[j].Pouls);
                    }
            }

            }
            else // Même chose que si le 1er choix égal à 1, mais pour le Poul cette fois ci
            {
                printf("\nVoulez vous trier de mani%cre croissante ou d%croissante ?\n", 138, 130);
                scanf("%d", &Choix_croissant);
                if (Choix_croissant==1)
                {
                    int i;
                    CSV* csv;
                    csv = calloc(Nb_ligne(), sizeof(CSV));
                    Lire_CSV(csv);
                    qsort(csv,Nb_ligne(), sizeof (CSV),Trier_Pouls_croissant );
                    for (i=0; i<Nb_ligne(); i++)
                    {
                        printf("Temps = %d , Pouls= %d\n", csv[i].Temps, csv[i].Pouls);
                    }
                }
            else
            {
                int j;
                CSV* csv;
                csv = calloc(Nb_ligne(), sizeof(CSV));
                Lire_CSV(csv);
                qsort(csv,Nb_ligne(), sizeof (CSV),Trier_Pouls_decroissant );
                for (j=0; j<Nb_ligne(); j++)
                    {
                        printf("Temps = %d , Pouls= %d\n", csv[j].Temps, csv[j].Pouls);
                    }
            }
        }
        break;
    case 3 : // Cas 3
        Recherche(); // Appel de la fonction de recherche dichotométrique
        break;
    case 4 : // Cas 4
        printf("%lf", Moyenne()); // On affiche le retour de la fonction pour calculer la Moyenne
        break;
    case 5 : // Cas 5
        printf("\nJusque l%c, il y a %d lignes enregistr%ces en m%cmoires\n", 133, Nb_ligne(), 130, 130); // Affichage du retour de la fonction pour calculer le nombre de ligne
        break;
    case 6 : // Cas 6
            Min_Max(); // Appel fonction pour afficher le minimum et maximum de Poul
            break;
    case 7 : // Cas 7
        continuer=0; // On chage continuer en 0 pour mettre fin au do...while
        printf("\nAu revoir !");
        break;
    case 8 :
        printf("\nChoisir la couleur de texte\n"); // On affiche les possibilités
        printf("\n0 : noir\n");
        printf("1: bleu foncé\n");
        printf("2: vert\n");
        printf("3: bleu-gris\n");
        printf("4: marron\n");
        printf("5: pourpre\n");
        printf("6: kaki\n");
        printf("7: gris clair\n");
        printf("8: gris\n");
        printf("9: bleu\n");
        printf("10: vert fluo\n");
        printf("11: turquoise\n");
        printf("12: rouge\n");
        printf("13: rose fluo\n");
        printf("14: jaune fluo\n");
        printf("15: blanc\n");
        scanf("%d\n", &Couleur_texte); // L'utilisateur rentre son choix
        system("cls"); // On efface l'affichage sur la console
        getchar(); // On demande une valeur fantôme avant de continuer
        printf("\nChoisir la couleur de fond\n");
        printf("\n0 : noir\n");
        printf("1: bleu foncé\n");
        printf("2: vert\n");
        printf("3: bleu-gris\n");
        printf("4: marron\n");
        printf("5: pourpre\n");
        printf("6: kaki\n");
        printf("7: gris clair\n");
        printf("8: gris\n");
        printf("9: bleu\n");
        printf("10: vert fluo\n");
        printf("11: turquoise\n");
        printf("12: rouge\n");
        printf("13: rose fluo\n");
        printf("14: jaune fluo\n");
        printf("15: blanc\n");
        scanf("%d\n", &Couleur_fond);
        color(Couleur_texte, Couleur_fond); // On définit la couleur du texte et de fond selon les choix de l'utilisateur
        break;
    }
    getchar(); // On demande une valeur fantôme, généralement immédiatement rempli par un reste
    getchar(); // On empêche le programme de s'arrêter en demandant une valeur fantôme avant de l'arr^ter
    system("cls");

    }while (continuer==1); // Condition pour la boucle do...while
}
