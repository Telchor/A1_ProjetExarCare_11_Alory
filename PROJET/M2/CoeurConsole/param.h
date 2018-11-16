
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"




 void clig(int Choix,int A,int deno){

    int X;
    X=(deno*1000)/A;  //Calcule des Battements

     switch(Choix){

     case 1:
        codegen1(X);
        break;

     case 2:
        codegen2(X);
        break;

     case 3:
        codegen3(X);        //variable(switch vers les categories de GenerationCode)
        break;

     case 4:
        codegen4(X);
        break;

     case 5:
        codegen5(X);
        break;
     case 6:
        codegen6(X);
        break;
     }
 }
