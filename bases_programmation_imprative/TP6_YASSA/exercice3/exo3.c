#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int n,b,c;
  
  printf ("saisissez un entier :\n");
  if ((scanf ("%d",&n) != 1) && (n<0)) {
    printf ("Erreur de saisir");
    exit (EXIT_FAILURE);
  }
  b=0;
  for (c=0;c<=n;c+=2) {
    b=c+b;
  }
  printf ("la somme dess entier pairs compris entre 2 et %d est : %d\n",n,b);

  
  return EXIT_SUCCESS;
}
