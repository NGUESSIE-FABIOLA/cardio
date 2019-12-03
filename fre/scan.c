#include <stdio.h>
#include <stdlib.h>


int ChoixAllumage(FILE* param,int *choix)
{


    int choix3= 0;


     //Boucle if selon le choix de l'utilisateur
    if(*choix == 1)
    {
        // écriture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define TOUTES_LED_CLIGNOTANTES",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Okay\n");
        fclose(param);

    }
    else if(*choix == 2)
    {
        // écriture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_1_SUR_2_ALLUMEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Okay\n");
        fclose(param);
    }
     else if(*choix == 3)
    {
        // écriture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_2_SUR_2_ALLUMEE",param);
        fputc('\n',param);
        fputs("#endif",param);
        printf("Okay\n");
        fclose(param);
    }
    else if(*choix == 4)
    {
        // écriture dans le fichier param.h de la constante qui
        //correspond au choix et qui sera reconnue par l'arduino
        fputs("#ifndef PARAM_H_INCLUDED\n#define PARAM_H_INCLUDED\n",param);
        fputs("#define LED_EN_CHENILLE",param);
        fputs('\n',param);
        fputs("#endif",param);
        printf("okay\n");
        fclose(param);
    }


    return choix3;

}
