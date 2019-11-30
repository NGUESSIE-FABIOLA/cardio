#include <stdio.h>
#include <stdlib.h>

void liste_temps(void){

	int caractereLu, ligne=1;

	FILE *fichier = fopen("battement.csv","r+");
	char mot[100];
	if (fichier==NULL){
		exit(0);
	}else{
		rewind(fichier);
		while (caractereLu!=EOF && ligne<4){
			caractereLu=fgetc(fichier);
			if (caractereLu=='\n')
			ligne++;

		}

	fgets(mot,100,fichier);
	printf("%s",mot);
	}

}
