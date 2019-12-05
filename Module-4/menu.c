#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include <string.h>
#include <windows.h>

// Declaration des différentes variables
int a,i,j,k,t1[5],t2[5],t,trouve,T1,T2,n[5],m[5],i1,i2,h;
int choix;
double S;
double moy;

//procédure tri rapide
void quickSort(int tableau[],int debut, int fin){

    int gauche = debut-1;
    int droite = fin+1;
    const int pivot = tableau[debut];

    if(debut >= fin)
        return;

    while(1)
    {
        do droite--; while(tableau[droite] > pivot);
        do gauche++; while(tableau[gauche] < pivot);

        if(gauche < droite){
            int temp = tableau[gauche];

    tableau[gauche] = tableau[droite];


    tableau[droite] = temp;


        }else break;
    }
    quickSort(tableau,debut, droite);
   quickSort(tableau, droite+1, fin);
}

// Algorithme de recherche

int Recherche(int j,int t1[],int t2[])
{
    trouve=0;
    printf("\n\n");
    printf("Entrez la valeur de votre temps\n");
    scanf("%d",&t);
    for (j=0;j<5;j++)
    {
        if (t2[j]==t)
        {
            trouve=1;
            t=t1[j];
            break;
        }
    }
    if (trouve==0)
    {
        printf("Le poul associe a %d n'existe pas\n",t);
    }else{
        printf("Le poul correspondant est: %d\n",t);
    }

}

//Classement ordre croissant

int OrdreCroiss(int j ,int t1[],int t2[]){

        for(int j=0;j<5;j++){
            printf("poul %d: %d\n",j, t1[j]);
        }
        printf("\n");
        for(int j=0;j<5;j++){
            printf("temps %d: %d\n",j,t2[j]);
        }

}

//Classement ordre décroissant
int OrdreDecroiss (int j ,int t1[],int t2[]){

        for(int j=4;j>=0;j--){
            printf("poul %d: %d\n",j, t1[j]);
        }
        printf("\n");
        for(int j=4;j>=0;j--){
            printf("temps %d: %d\n",j,t2[j]);
        }

}

//Calcul de la moyenne des pouls pour une plage de temps donnée
double moyenne(int m[])
{
    if(i1>i2)

    {
        S=0;
        for (a=i2;a<=i1;a++)
        {
            S = S + m[a];
        }
        return S/((i1-i2)+1);
    }

    else

    {
        S=0;
        for (a=i1;a<=i2;a++)
        {
            S = S + m[a];
        }
        return S/((i2-i1)+1);
    }


}

//Nombres de lignes en mémoire

int ligne_memoire (int h)
{
    printf("\n\n");
    h=5;
    printf("Nombres de lignes de donnees en memoire : %d\n", h);
}

// Afficher Max et min des pouls avec leurs temps associés
int Max_min (int t1[],int t2[])
{
    printf("\n\n");
    printf("Le max des pouls est : %d\n", t1[4]);
    printf("Temps max : %d\n", t2[4]);
    printf("Le min des pouls est : %d\n", t1[0]);
    printf("Temps min : %d\n", t2[0]);
}

// Afficher le contenu du fichier Battement.csv

 void aff_donn(int m[],int n[])
 {
     for(int k=0;k<5;k++)
        {
           printf("Poul %d : %d \n Temps %d : %d \n",k,m[k],k,n[k]);
           printf("\n");

        }


 }

int main()
{
    system ("COLOR 4F"); // Background et Text-color de la console

    FILE* fichier= NULL; //création d'un fichier et initialisation à nul
    fichier=fopen("Battement.csv","r"); // Ouverture du fichier Battement.csv

    // Création d'une structure dans laquelle je défini mon poul et mon temps

    typedef struct battement battement;
    struct battement{
    int poul;
    int temps;
    };

    // Définition d'un pointeur cardio associé à la structure

    battement *cardio;
    cardio = malloc(5*sizeof(battement)); // Demande d'allocations mémoires
    int *poul, *temps;
    poul = malloc(5*sizeof(int)); // Allocations mémoires des pouls
    temps= malloc(5*sizeof(int)); // Allocations mémoires des temps

    //On rempli la structure
        for(int k=0;k<5;k++){
                fscanf(fichier, "%d;%d", &cardio[k].poul,&cardio[k].temps);
        }

        //Temps non triés

        for(int k=0;k<5;k++)
        {
            n[k]=cardio[k].temps;
        }

        //Pouls non triés
        for(int k=0;k<5;k++)
        {
            m[k]=cardio[k].poul;
        }

        //on crée les tableaux qui contient les pouls et les temps
        for(int j=0;j<5;j++){
            poul[j] = cardio[j].poul;
            temps[j] = cardio[j].temps;
        }

    quickSort(poul,0,4); // On tri les pouls
    quickSort(temps,0,4); // On tri les temps

     for(int j=0;j<5;j++){
             cardio[j].poul= poul[j];
             cardio[j].temps=temps[j];
             t1[j]=cardio[j].poul; // On basule les valeurs de pouls de la structure pour faciliter leur manipulation dans les fonctions
             t2[j]=cardio[j].temps; // Même chose pour les temps

        }

      printf("----------------------------------------------------HEXART CARE---------------------------------------------------------\n\n");
      printf("                                 ||   Un coeur qui bat au rythme de vos reves!   ||                                 \n\n\n\n");
      printf("****************************************Bienvenue dans votre menu operationnel******************************************\n\n\n");
	do{
      printf("\n\n");
	  printf("Que voulez-faire?\n\n");
	  printf("1 : Afficher les donnees repertoriees dans le fichier\n");
      printf("2 : Afficher les pouls et les temps dans l'ordre croissant \n" );
      printf("3 : Afficher les pouls et les temps dans l'ordre decroissant \n");
      printf("4 : Rechercher et afficher le poul pour un temps particulier \n");
      printf("5 : Afficher la moyenne de pouls dans une plage de temps donnee \n");
      printf("6 : Afficher le nombre de lignes de donnees actuellement en memoire \n");
      printf("7 : Rechercher et afficher les max et min de pouls\n");
      printf("0 : Quitter le programme \n");
      scanf("%d", &choix);

      switch(choix)
	{

    case 1: // Affichage des données stockées

        printf("\n");
        aff_donn(m,n);
        printf("\n\n");
        printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n ");
        scanf("%d", &choix);
        break;

	case 2: // Ordre croissant

	OrdreCroiss(j,t1,t2);
	printf("\n\n");
	printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n ");
	scanf("%d", &choix);
	break;

	case 3: //Ordre décroissant

	printf("\n\n");
	OrdreDecroiss(j,t1,t2);
	printf("\n\n");
	printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n ");
	scanf("%d", &choix);
	break;

	case 4: // Rechercher le poul selon un temps donné

	printf("\n\n");
	Recherche(j,t1,t2);
    printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n");
	scanf("%d", &choix);
	break;

	case 5: // Moyenne des pouls selon une plage de temps donnée

        // On entre la première valeur de temps

        printf("\n\n");
        trouve=0;
        printf("Entrez la premiere valeur du temps\n");
        scanf("%d",&T1);

        // On vérifie si la valeur de temps entrée existe

        for (j=0;j<5;j++){
            if(n[j]==T1)
                {
                    trouve=1;
                    i1=j;
                    break;
                }
        }
        if(trouve==0)
        {
            printf("La valeur %d du temps n'existe pas\n",T1);
            printf("Entrez de nouvelle fois votre premiere valeur du temps\n");
            scanf("%d",&T1);
            printf("position : %d\n",i1); // indice dans le tableau
        }
        if (trouve!=0){
            printf("La valeur %d du temps existe\n",T1);
            i1=j;
            printf("position : %d\n",i1); // indice dans le tableau
        }

            // On passe à l'entrée de la seconde valeur

    printf("Entrez la seconde valeur du temps\n");
    scanf("%d",&T2);

          // On vérifie encore si la valeur de temps entrée existe

        for (j=0;j<5;j++){
            if (n[j]==T2)
                {
                    trouve=1;
                    i2=j;
                    break;
                }
        }

        if(trouve==0)
        {
            printf("La valeur %d du temps n'existe pas\n",T2);
            printf("Entrez de nouvelle fois la seconde valeur du temps\n");
            scanf("%d",&T2);
            printf("position : %d\n",i2); // indice dans le tableau
        }
        if(trouve!=0){
            printf("La valeur %d du temps existe\n",T2);
            i2=j;
            printf("position : %d\n",i2); // indice dans le tableau
        }

        moy = moyenne(m); // On stocke la moyenne dans une variable

        printf("La moyenne des pouls donne : %lf \n",moy);

        printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n");
        scanf("%d", &choix);
        break;

    case 6: //Nombre de lignes de données en mémoire

        printf("\n\n");
        ligne_memoire(h);
        printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n");
        scanf("%d", &choix);
        break;

    case 7: // Max et min de pouls avec les temps associés

        printf("\n\n");
        Max_min(t1,t2);
        printf("\n");
        printf("Voulez-vous continuer ?\n 1:Continuer \n 0:Quitter \n");
        break;
        }

        }while(choix>0 && choix<8);

    if (choix==0)
    {
        printf("Merci pour votre confiance \n");
    }
    else
    {
        printf("Nous vous prions de vous conformer a la plage de choix possibles\n");
        scanf("%d", &choix);

    }
        return 0;

     fclose("Battement.csv");

}




