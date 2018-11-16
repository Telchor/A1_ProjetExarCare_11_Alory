#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED

typedef struct  {
    int Temps;
    int Pouls;
}CSV;
int Lire_CSV(CSV* csv);

#endif // DONNEES_H_INCLUDED
