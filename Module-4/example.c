#include <stdio.h>
#include <stdlib.h>

int main(void){

	FILE* fic = NULL;

	fic = fopen("battement.csv","r");

	if(fic == NULL){
		printf("ce fichier n'existe pas");
	}else{
		printf("ce fichier existe \nMerci\n");
		fputs("\n Bonjour Membres du jury nous sommes le Groupe 9\n",fic);
	}


//////lecture du fichier battement.csv

	char liste[41];

	do{
		liste[40] = fgetc(fic);
		printf("%s\n",liste);
		printf("Merci\n");
	}while(liste[40] != EOF);

	fclose(fic);

	return 0;

}


