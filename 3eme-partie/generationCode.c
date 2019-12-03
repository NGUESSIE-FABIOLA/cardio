#include <stdio.h>
#include <stdlib.h>

void generationCode(void){
}


void allume_All(void){
	printf("\n televersez le programme Svp\n\n");
    system("start module_coeur\\module_coeur.ino");
}

void allume_chenille(void){
	printf("\n televersez le programme Svp\n\n");
    system("start module_chenille\\module_chenille.ino");
}

void allume_led_2(void){
	printf("\n televersez le programme Svp\n\n");
    system("start module_led_2\\module_led_2.ino");
}

void allume_led_3(void){
	printf("\n televersez le programme Svp\n\n");
    system("start module_led_3\\module_led_3.ino");
}

void allume_led_particulier(void){

	int led;

	printf("\n Choississez la led qui doit s'allumer\n\n");
	printf("\n 1 pour le bas \n");
	printf("\n 2 pour la deuxieme a droite \n");
	printf("\n 3 pour la 3eme a droite \n");
	printf("\n 4 pour la quattrieme a droite  \n");
	printf("\n 5 pour la 5 eme a droite \n");
	printf("\n 6 pour le centre du coeur \n");
	printf("\n 7 pour la 6eme a gauche \n");
	printf("\n 8 pour la 7eme a gauche \n");
	printf("\n 9 pour la 8eme a gauche \n");
	printf("\n 10 pour la 9eme a gauche \n");
	scanf("%d", &led);

	switch (led)
	{
		case 1:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n1\\module_led_n1.ino");
		break;

		case 2:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n2\\module_led_n2.ino");
		break;
		
		case 3:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n3\\module_led_n3.ino");
		break;

		case 4:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n4\\module_led_n4.ino");
		break;

		case 5:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n5\\module_led_n5.ino");
		break;

		case 6:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n6\\module_led_n6.ino");
		break;

		case 7:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n7\\module_led_n7.ino");
		break;

		case 8:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n8\\module_led_n8.ino");
		break;

		case 9:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n9\\module_led_n9.ino");
		break;

		case 10:
		printf("\n televersez le programme Svp\n\n");
    	system("start module_led_n10\\module_led_n10.ino");
		break;
	
	default:
		printf("\n Pas de desordre s'il vous plait\n\n");
		break;
	}



}



///////////////ecriture dans un fichier
/*	FILE* fichier = NULL;

	fichier = fopen("allume_All.ino", "w+");
	
	if (fichier != NULL){
		fputc('A', fichier); // Écriture du caractère A
		fclose(fichier);
	}

*/

/////////////////////////test ligne de commmande
void lancement_fichier(){
	FILE *fichier;
    char chaine[100];
 
    fichier = popen("ls","r");
 
 
    while(fgets(chaine, 100,fichier) != NULL)
        printf("%s",chaine);
 
 
 
    pclose(fichier);
}
/////////////////////////
