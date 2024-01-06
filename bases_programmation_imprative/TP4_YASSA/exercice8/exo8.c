#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int a,b;
  char c;
  
  printf ("entrez deux entiers :\n");
  if (scanf("%d%d",&a,&b)!= 2) {
    printf ("Erreur de saisir");
    exit (EXIT_FAILURE);
  }
  printf ("veuillez saisir loperation :\n");
  if ((scanf("%c",&c) !=1) && ((c!='+')||(c!='-')||(c!='*')||(c!='/'))) {
    printf ("Erreur de saisir");
    exit (EXIT_FAILURE);
  }
  if (c=='+') {
    printf ("La somme de les deux entiers %d et %d est : %d\n",a,b,a+b);
  }
  else if (c=='-') {
    if (a>=b) {
      printf ("la difference des deux entiers %d et %d est : %d\n",a,b,a-b);
    } else { printf ("la difference des deux entiers %d et %d est : %d\n",a,b,b-a);
  }}
  else if (c=='*') {
    printf ("le produit des deux entiers %d et %d est : %d\n",a,b,a*b);
  }
  else if (c=='/') {
    if (a>=b) {
      printf ("le quotient des deux entiers %d et %d est : %d\n",a,b,a/b);
    } else { printf ("le quotient des deux entiers %d et %d est : %d\n",a,b,b/a);
    }}
  
  
  
  return EXIT_SUCCESS;
}
