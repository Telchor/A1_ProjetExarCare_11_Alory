#include <stdio.h>
#include <stdlib.h>

void codegen1(X)              //code a implanter dans l'arduino
{

   FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");

    if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d;",X);
     fputs("\nvoid setup() {\npinMode(2,OUTPUT);\npinMode(3,OUTPUT);\npinMode(4,OUTPUT);\npinMode(5,OUTPUT);\npinMode(6,OUTPUT);\npinMode(7,OUTPUT);\npinMode(8,OUTPUT);\n",fichier);
fputs("pinMode(9,OUTPUT);\npinMode(10,OUTPUT);\npinMode(11,OUTPUT);}\nvoid loop() {\n digitalWrite(6,HIGH);\n  delay(X);\n digitalWrite(2,HIGH);\n  delay(X);\n",fichier);
fputs("digitalWrite(3,HIGH);\n  delay(X);\n digitalWrite(4,HIGH);\n  delay(X);  \n digitalWrite(5,HIGH);\n  delay(X);\n digitalWrite(10,HIGH);\n  delay(X);  \n digitalWrite(11,HIGH);\n",fichier);
fputs("  delay(X);\n digitalWrite(9,HIGH);\n  delay(X);\n digitalWrite(8,HIGH);\n  delay(X);\n digitalWrite(7,HIGH);\n delay(X);\n digitalWrite(6, LOW);\n delay(X);\n digitalWrite(2, LOW);\n",fichier);
fputs("  delay(X);\n digitalWrite(3, LOW);\n delay(X);\n digitalWrite(4, LOW);\n delay(X);\n digitalWrite(5, LOW);\n delay(X);\n digitalWrite(10,LOW);\n delay(X);\n digitalWrite(11,LOW);\n",fichier);
fputs("  delay(X);\n digitalWrite(9, LOW);\n delay(X);\n digitalWrite(8, LOW);\n delay(X);\n digitalWrite(7, LOW);\n delay(X);\n}",fichier);

    }


    else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
}

void codegen2(X)
{
 FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");

    if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d;",X);
     fputs("\nvoid setup() {\npinMode(2,OUTPUT);\npinMode(3,OUTPUT);\npinMode(4,OUTPUT);\npinMode(5,OUTPUT);\npinMode(6,OUTPUT);\npinMode(7,OUTPUT);\npinMode(8,OUTPUT);\n",fichier);
     fputs("pinMode(9,OUTPUT);\npinMode(10,OUTPUT);\npinMode(11,OUTPUT);\n}\nvoid loop()\n{\ndigitalWrite(6,HIGH);\ndelay(100);\n",fichier);
     fputs("digitalWrite(6, LOW);\n delay(X);\ndigitalWrite(2,HIGH);\ndelay(100);\ndigitalWrite(2, LOW);\ndelay(X);\ndigitalWrite(3,HIGH);\ndelay(100);\ndigitalWrite(3, LOW);\ndelay(X);\n",fichier);
     fputs("digitalWrite(4,HIGH);\ndelay(100);\ndigitalWrite(4, LOW);\ndelay(X);\ndigitalWrite(5,HIGH);\ndelay(100);\ndigitalWrite(5, LOW);\ndelay(X);\ndigitalWrite(10,HIGH);\ndelay(100);\n",fichier);
     fputs("digitalWrite(10,LOW);\ndelay(X);\ndigitalWrite(11,HIGH);\ndelay(100);\ndigitalWrite(11,LOW);\ndelay(X);\ndigitalWrite(9,HIGH);\ndelay(100);\ndigitalWrite(9, LOW);\ndelay(X);\n",fichier);
     fputs("digitalWrite(8,HIGH);\ndelay(100);\ndigitalWrite(8, LOW);\ndelay(X);\ndigitalWrite(7,HIGH);\ndelay(100);\ndigitalWrite(7, LOW);\ndelay(X);\n}",fichier);
    }
          else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
}

void codegen3(X)
  {
 FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");

    if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d;",X);
     fputs("\nvoid setup() {\npinMode(2,OUTPUT);\npinMode(3,OUTPUT);\npinMode(4,OUTPUT);\npinMode(5,OUTPUT);\npinMode(6,OUTPUT);\npinMode(7,OUTPUT);\npinMode(8,OUTPUT);\n",fichier);
     fputs("pinMode(9,OUTPUT);\npinMode(10,OUTPUT);\npinMode(11,OUTPUT);}\n",fichier);
     fputs("void loop()\n{\ndigitalWrite(6,HIGH),digitalWrite(2,HIGH),digitalWrite(3,HIGH),digitalWrite(4,HIGH),digitalWrite(5,HIGH),digitalWrite(10,HIGH),digitalWrite(11,HIGH),digitalWrite(9,HIGH),digitalWrite(8,HIGH),digitalWrite(7,HIGH);\n",fichier);
     fputs("delay(100);\ndigitalWrite(6,LOW),digitalWrite(2,LOW),digitalWrite(3,LOW),digitalWrite(4,LOW),digitalWrite(5,LOW),digitalWrite(10,LOW),digitalWrite(11,LOW),digitalWrite(9,LOW),digitalWrite(8,LOW),digitalWrite(7,LOW);\n",fichier);
     fputs("delay(X);\n} ",fichier);
    }
          else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
  }

void codegen4(X)
  {
 FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");

    if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d;",X);
     fputs("\nvoid setup() {\npinMode(2,OUTPUT);\npinMode(3,OUTPUT);\npinMode(4,OUTPUT);\npinMode(5,OUTPUT);\npinMode(6,OUTPUT);\npinMode(7,OUTPUT);\npinMode(8,OUTPUT);\n",fichier);
     fputs("pinMode(9,OUTPUT);\npinMode(10,OUTPUT);\npinMode(11,OUTPUT);}\n",fichier);
     fputs("void loop()\n{digitalWrite(6,HIGH),digitalWrite(3,HIGH),digitalWrite(5,HIGH),digitalWrite(11,HIGH),digitalWrite(8,HIGH),digitalWrite(2,LOW),digitalWrite(4,LOW),digitalWrite(10,LOW),digitalWrite(9,LOW),digitalWrite(7,LOW);\n",fichier);
     fputs("delay(X/2);\ndigitalWrite(6,LOW),digitalWrite(3,LOW),digitalWrite(5,LOW),digitalWrite(11,LOW),digitalWrite(8,LOW),digitalWrite(2,HIGH),digitalWrite(4,HIGH),digitalWrite(10,HIGH),digitalWrite(9,HIGH),digitalWrite(7,HIGH);\n",fichier);
     fputs("delay(X/2);\n}\n ",fichier);
    }
          else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
  }

void codegen5(X)
   {
 FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");

    if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d;",X);
     fputs("\nvoid setup()\n{pinMode(2,OUTPUT);\npinMode(3,OUTPUT);\npinMode(4,OUTPUT);\npinMode(5,OUTPUT);\npinMode(6,OUTPUT);\npinMode(7,OUTPUT);\npinMode(8,OUTPUT);\npinMode(9,OUTPUT);\npinMode(10,OUTPUT);\npinMode(11,OUTPUT);\n}\n",fichier);
     fputs("void loop()\n{digitalWrite(6,HIGH),digitalWrite(4,HIGH),digitalWrite(9,HIGH),digitalWrite(2,LOW),digitalWrite(11,LOW),digitalWrite(5,LOW),digitalWrite(7,LOW),digitalWrite(10,LOW),digitalWrite(8,LOW),digitalWrite(3,LOW);\n",fichier);
     fputs("delay(X);\ndigitalWrite(6,LOW),digitalWrite(4,LOW),digitalWrite(9,LOW),digitalWrite(2,HIGH),digitalWrite(11,HIGH),digitalWrite(5,HIGH),digitalWrite(7,HIGH),digitalWrite(10,LOW),digitalWrite(8,LOW),digitalWrite(3,LOW);\n",fichier);
     fputs("delay(X);\ndigitalWrite(6,LOW),digitalWrite(4,LOW),digitalWrite(9,LOW),digitalWrite(2,LOW),digitalWrite(11,LOW),digitalWrite(5,LOW),digitalWrite(7,LOW),digitalWrite(10,HIGH),digitalWrite(8,HIGH),digitalWrite(3,HIGH);\n",fichier);
     fputs("delay(X);\n}\n ",fichier);
    }
          else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
   }

void codegen6(X)
{
    int C;
   printf("Quel LED voulez vous allumer ?(1-10) : \n");
   scanf("%d",&C);
   C=C + 1;
  FILE *fichier = NULL;
 fichier = fopen("C:\\Users\\leo gilles\\Documents\\Arduino\\CoeurChargement\\Coeur2\\Coeur2.ino","w+");
 if (fichier != NULL)
    {

     fprintf(fichier,"int X=%d ;",X);
     fprintf(fichier,"int C=%d ;",C);
     fputs("\nvoid setup()\n{pinMode(C,OUTPUT);\n}\n",fichier);
     fputs("void loop()\n{\ndigitalWrite(C,HIGH);\ndelay(100);\ndigitalWrite(C,LOW);\ndelay(X);\n}\n",fichier);

    }
          else
    {
        printf("Impossible d'ouvrir le fichier \n");
    }
fclose(fichier);
}



