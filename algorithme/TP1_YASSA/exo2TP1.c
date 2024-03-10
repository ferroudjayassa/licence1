#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (void) {
  
  const int max = 8;
  char mot [max+1];
  int cpt =0;
  char *endptr;
  int base =10;
  long int resultat;
  
  while (scanf ("%s",mot)==1){
    cpt++;
    errno=0;
    resultat = strtol(mot, &endptr, base);
    
    if (*endptr == '\0') {
        if (errno == ERANGE) {
            printf("%d \t %s \t value out of range\n", cpt, mot);
        } else {
            printf("%d \t %s \t operand = %ld\n", cpt, mot, resultat);
        }
    } else {
        printf("%d \t %s \t illegal value\n", cpt, mot);
    }
  }
  return EXIT_SUCCESS;
}

