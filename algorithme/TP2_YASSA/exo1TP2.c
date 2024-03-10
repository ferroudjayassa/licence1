#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX 32
#define SMAX "32"
#define HMAX 32

void ajouter ( long int pile[], int *top, int chiffre){
      (*top)++;
      pile[*top] = chiffre;
  }
  
void supprimer(int *top) {
  (*top)--;
  
  }



int main(void) {
    char mot[MAX + 1];
    int cpt = 0;
    char *endptr;
    int base = 10;
    long int resultat;
    long int pile[HMAX + 1];
    int top = -1;

    while (scanf("%s", mot) == 1) {
        cpt++;
        errno = 0;
        resultat = strtol(mot, &endptr, base);

        if (*endptr == '\0' && errno == 0) {
            ajouter(pile,&top,resultat);

            if (top == HMAX) {
                printf("No more Place ! \n");
                exit(EXIT_SUCCESS);
            }
        } else if (errno == ERANGE) {
            printf("out of range\n");
            exit(EXIT_FAILURE);
        } else {
            if (strcmp(mot,"ADD") == 0 && top >= 1) {
                pile[top - 1] = pile[top] + pile[top - 1];
                supprimer(&top);
            } else if (strcmp(mot,"MUL") == 0 && top >= 1) {
                pile[top - 1] = pile[top] * pile[top - 1];
                supprimer(&top);
            } else if (strcmp(mot,"END") == 0 && top==0 ) {
                printf("%ld ", pile[top]);
                supprimer(&top);
            } else {
                printf("%d \t %s \t illegal value\n", cpt, mot);
                exit(EXIT_FAILURE);
            }
        }
    }

    return EXIT_SUCCESS;
}
