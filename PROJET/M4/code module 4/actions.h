#ifndef ACTIONS_H_INCLUDED
#define ACTIONS_H_INCLUDED
#include "donnees.h"

// On définie le prototype des fonctions à utiliser
int Nb_ligne();
void Afficher_brut();
void Fusion (CSV* csv, int g, int m, int d);
void TriFusion (CSV* csv, int g, int d);
int Trier_Temps_croissant();
int Trier_Temps_decroissant();
int Trier_Pouls_croissant();
int Trier_Pouls_decroissant();
int Recherche();
int Min_Max();
void color(int t,int f);
double Moyenne();
#endif // ACTIONS_H_INCLUDED
