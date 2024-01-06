#include <stdio.h>
#include <stdlib.h>

  int main (void) {
  
  float i,s,n;
  
  s=0;i=0;
  printf("veuillez saisir une premiere valeur \n");
  while(scanf("%f",&n)==1)
  {
    s=s+n;
    i++;
    printf("veuillez saisir une %.0feme valeur \n",i+1);
  }

  printf("la somme des nombres que vous avez saisi est %.3f\n",s);
  
    return EXIT_SUCCESS;
  }
