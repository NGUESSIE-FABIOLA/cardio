#include <stdio.h>
#include <stdlib.h>

int main(void){


    FILE *fichier;
    char chaine[100];
 
    fichier = popen("mkdir test-cmd.txt\nls","r");
 
 
    while(fgets(chaine, 100,fichier) != NULL)
        printf("%s",chaine);
 
 
 
    pclose(fichier);

    return 0;

}