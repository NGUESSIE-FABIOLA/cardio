#include <stdio.h>
#include <stdlib.h>

void liste(void){

	FILE *fic = NULL;
	fic = fopen("battement.csv","r");
	char c;

	if(fic == NULL){
		printf("ce fichier n'existe pas");
	}else{
		printf("ce fichier existe \nMerci de m'ouvrir\n----------------------\n");
	}

	while(!feof(fic)){
		fscanf(fic, "%c", &c);
		printf("%c", c);
	}
	printf("\n----------------------\n");
	fclose(fic);

}

