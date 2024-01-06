#include <stdio.h>
#include <stdlib.h>

  int main(void)
 {
   int a,b,c;

    printf("saisir un nombre dheures puis un nombre du minutes puis un nombre de secondes: \n");
    scanf("%d %d %d",&a,&b,&c);
    
     if (c < 59) { c == c + 1; }
        else { c == 0;} 
     if (b < 59) { b++;}
        else { b == 0;}
     if (a < 23) { a++;}
        else { a == 0; }
                
    printf("le resultat est %d heure %d minutes %d secondes",a,b,c);

	  return EXIT_SUCCESS;
  }
