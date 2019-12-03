#include <stdio.h>
#include <stdlib.h>

int affichermenu()
{
    int choix = 0;
    printf(" --------------------------------------HEXART-CARE-------------------------------------\n\n\n ");

    printf( " Choisissez le mode d'allumage des LEDs du coeur :\n " );
    printf( " 0: Quitter le programme\n " );
    printf( " 1: Allumer toutes les LEDS\n " );
    printf( " 2: Allumer en chenille \n " );
    printf( " 3: Allumer une LED sur deux\n " );
    printf( " 4: Allumer deux LED sur deux\n\n " );

    printf ("    Veuillez entrer votre choix: \n\n");

    scanf("%d",&choix);

switch(choix)
{

case 0:
    printf("\n Aurevoir a vous");
    break;
case 1:
    printf("\n televersez le programme\n\n");
    system("start module_coeur\\module_coeur.ino");
    break;

case 2:
    printf("\n televersez le programme\n\n");
    system("start chenille\\chenille.ino");
    break;

case 3:
    printf("\n televersez le programme\n\n");
    system("start 1_LED_sur_2_allumee\\1_LED_sur_2_allumee.ino");
    break;

case 4:
    printf("\nteleversez le programme\n\n");
    system("start allumage_2_a_2\\allumage_2_a_2.ino");
    break;

default:

     printf("Nous vous remercions pour votre choix , veuillez entrer un nombre appartenant au menu! \n");

    }
    return choix;
}

