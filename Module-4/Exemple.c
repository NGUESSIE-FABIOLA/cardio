#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main (void)
{
    FILE* fic ;
    char ligne[81];
    char *ptr_chaine ; // pointeur pour balayer les sous-chaînes obtenues
    short int num_ligne = 1 ;
    short int data_entier;
    double data_reel;
    char data_chaine[11];
//----------------------- ouverture du fichier de données CSV ------------------------------
    fic = fopen( "battement.csv", "rt") ;
    if (fic==NULL)
    {
        printf("Ouverture fichier impossible !");
        exit(0);
    }
//----------------------- lecture du fichier de données CSV ------------------------------
// on lit une ligne après l'autre jusqu'à la fin du fichier
    while ( fgets( ligne, 81, fic) != NULL )
    {
        printf("\n Ligne %2hd :", num_ligne );
        num_ligne++ ;
        ptr_chaine = strtok(ligne, ";"); // appel d'initialisation de strtok. Séparateur = ';'
        /* on lit une cellule (colonne) après l'autre jusqu'à la fin de la ligne. Notez que si les cellules contenaient
        des données de même type, on pourrait écrire une boucle while(ptr_chaine!=NULL){} */
// cellule 1 :
        if (sscanf(ptr_chaine,"%s", data_chaine) != 1) // verif. de la validité des données
        {
            puts("\nPb de lecture cellule 1 (chaine) !");
            data_chaine[0]=0;
        }
        ptr_chaine = strtok (NULL, ";"); // remplace le prochain séparateur trouvé par 0,
// puis renvoie l'adresse de la chaîne ainsi obtenue. Séparateur = ';'
// cellule 2 :
        if (sscanf(ptr_chaine,"%hd", &data_entier) != 1)
        {
            puts("\nPb de lecture cellule 2 (entier)!");
            data_entier=-11111;
        }
        ptr_chaine = strtok (NULL, ";"); // remplace le prochain séparateur trouvé par 0
// cellule 3 :
        ptr_chaine = strtok (NULL, ";"); // on saute la cellule 3 supposée sans intérêt
// cellule 4 :
        if (sscanf(ptr_chaine,"%lf", &data_reel) != 1)
        {
            puts("\nPb de lecture cellule 4 (reel)!");
            data_reel=-111.111;
        }
        ptr_chaine = strtok (NULL, ";"); // non indispensable ici
// affichages :
        printf("\n\t cellule 1 (chaine): %11s ", data_chaine ) ;
        printf("\n\t cellule 2 (entier): %11hd", data_entier);
        printf("\n\t cellule 4 (reel) : %11.3lf", data_reel);
    }
    fclose(fic);
}
