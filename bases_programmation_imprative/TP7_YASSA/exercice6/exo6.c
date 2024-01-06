#include <stdio.h>
#include <stdlib.h>

  int main (void) {
  
  float max,i,n;
  
  i=0;
  printf("veuillez saisir une 1ere valeur reel : \n");
  max = n;
  while(scanf("%f\n",&n)==1)
  {
    if (n>max) {
      max = n;
    }
    i++;
    printf("veuillez saisir une %.0feme valeur reel :\n",i+1);
  }

  printf("la valeur maximale des nombres que vous avez saisi est : %.3f\n",max);
  
    return EXIT_SUCCESS;
  }

