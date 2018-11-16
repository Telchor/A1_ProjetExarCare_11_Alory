#include <stdio.h>
#include <stdlib.h>
#include "actions.h"
#include "donnees.h"




int Lire_CSV(CSV* csv) //Fonction permettant de lire le fichier et retransmettre les données dans la structurre CSV
{
    int i; //On initialise
    FILE *pouls = fopen("pouls.csv", "r"); //On ouvre le fichier csv en lecture uniquement
    for(i=0; i<Nb_ligne(); i++) //Pour i allant de 0 au nombre de ligne du code
    {
        fscanf(pouls,"%d;%d", &csv[i].Temps,&csv[i].Pouls); //On prend les valeur dans le fichier et on les met dans le
    }                                                     //tableaux de struct pour le Temps et pour le Poul

    fclose(pouls);// On ferme le fichier
}
