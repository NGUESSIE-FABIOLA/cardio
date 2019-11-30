#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE* fic = NULL;

	fic = fopen("donnees.c","r");

	if(fic == NULL){
		printf("ce fichier n'existe pas");
	}else{
		printf("ce fichier existe \nMerci\n");
	}


//////lecture du fichier battement.csv

	char liste;

	do{
		liste = fgetc(fic);
		printf("%c",liste);
	}while(liste != EOF);

	printf("Merci\n");

	fclose(fic);

	return 0;

}


