#ifndef SCAN_H_INCLUDED
#define SCAN_H_INCLUDED

//Choix de l'allumage des led
int ChoixAllumage(FILE* param,int* choix);


//fonction pour le choix de la LED , beaucoup trop long pour être placé dans le main
int FonctionChoixLed(FILE*);

#endif // scan_H_INCLUDED
