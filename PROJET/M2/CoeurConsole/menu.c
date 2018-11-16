#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

void menu()
{
   int B;
   B=0;

   int A;
   A=0;                                 //initialisation

   int deno;
   deno=0;

   int Choix;
   Choix=1;

    printf("Choisir le mode d'affichage de votre coeur\n");
    printf("1.Chargement\n");
    printf("2.Petite Chenille\n");                     //Affichage et sélection du mode de clignottement
    printf("3.Clignotement\n");
    printf("4.1/2\n");
    printf("5.1/3\n");
    printf("6.Une seul LED\n");
    scanf("%d",&Choix);

    printf("\n Battement par s :\n");
    printf("Battement : ");                //Input de la Vitesse de Battement du Coeur
    scanf("%d",&A);
    printf("en s : ");
    scanf("%d",&deno);

     clig(Choix,A,deno);                          //fonction de sélection dans param.h

      printf("Changer ?\n");                   //
      printf("1.Oui  2.Non\n");                //
      scanf("%d",&B) ;                         //boucle conditionel pour recommencer si il y a une erreur
        if ( B == 1 )                          //
        { menu(); }                            //

}
