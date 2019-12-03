#include <stdio.h>
#include <stdlib.h>

void Lire_Grille(int **G)
{
    int **G;
       FILE *f;
      int i,j;
 
     f=fopen("grille.txt","r");
     if(f!=NULL)
     {
                fscanf(f,"%d",G);
                for(i=0;i<9;i++)
                 for(j=0;i<9;i++)
                     fscanf(f,"%d",&G[i][j]);
     }        
     else
     {
         printf("erreur d ouverture \n");
         system("pause");
         exit(0);
         }
}

int main(void) {

    char A;
    Lire_Grille(A);

return 0;

}