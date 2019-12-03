#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "scan.h"
#include "module_coeur.h"


int main()

{


 FILE* param = NULL;
    param = fopen("module_coeur/param.h","w+");
    // Ouvrir fichier param.h

    int choix,choix3;

    if(param!=NULL)
    {
        do
    {
    // Appel de la fonction qui affiche le menu
    choix = affichermenu();

    choix3 = ChoixAllumage(param,&choix);
    }
    while(choix != 0);
    }
    else
    {
        printf("Pas encore !!!!");
        fclose(param);
        exit(0);
    }



    return 0;
}


