#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i = 0;
	FILE *battement = fopen("battement.csv","r");
	signed char resultat[200];

	if(battement == NULL){
		exit(1);
	}

	fgets(resultat, 199, battement);
	printf("%s\n", resultat);

	fclose(battement);

	return 0;

}
