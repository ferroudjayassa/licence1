#include <stdlib.h>
#include <stdio.h>

 int main(void) {

 int x,y;
  printf("Entrez le premiere entier :\n");
  scanf("%d",&x);

  printf("Entrez le deuxieme entier :\n");
  scanf("%d",&y);

  printf("La somme de %d + %d est : %d\n",x,y, x+y);
   
  printf("La soustrction de %d - %d est : %d\n",x,y, x-y);
  printf("La soustrction de %d - %d est : %d\n",y,x, y-x);

  printf("Le produit de %d X %d est : %d\n",x,y, x*y);
  
  printf("Le quotient de %d / %d est : %d\n",x,y,x/y);
  
  printf("Le quotient de %d / %d est : %d\n",y,x,y/x);

  printf("La moyenne de %d et %d  est : %d\n",x,y,(x+y)/2);

 return EXIT_SUCCESS;
 }
