#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX 32
#define SMAX "32"
#define MUL "MUL"
#define ADD "ADD"
#define END "END"
#define SUB "SUB"
#define QUO "QUO"
#define REM "REM"
#define HMAX 32

int main(void) {
    char mot[MAX + 1];
    char *endptr;
    long int num;
    long int pile[HMAX + 1];
    size_t h = 0;

    while (scanf("%" SMAX "s", mot) == 1) {
        errno = 0;
        num = strtol(mot, &endptr, 10);

        if (*endptr == '\0' && errno == 0) {
            printf("%ld", num);
            pile[h] = num;

            if (h == HMAX) {
                printf("No more Place ! \n");
                exit(EXIT_SUCCESS);
            }

            ++h;
        } else if (errno == ERANGE) {
            printf("out of range");
            exit(EXIT_FAILURE);
        } else {
            if (strcmp(mot, ADD) == 0 && h >= 2) {
                printf("%s \t operator \n", mot);
                pile[h - 2] = pile[h - 1] + pile[h - 2];
                --h;
            } else if (strcmp(mot, MUL) == 0 && h >= 2) {
                printf("%s \t operator \n", mot);
                pile[h - 2] = pile[h - 1] * pile[h - 2];
                --h;
            } else if (strcmp(mot, SUB) == 0 && h >= 2) {
                printf("%s \t operator \n", mot);
                pile[h - 2] = pile[h - 1] - pile[h - 2];
                --h;
            } else if (strcmp(mot, QUO) == 0 && h >= 2) {
                printf("%s \t operator \n", mot);
                pile[h - 2] = pile[h - 1] / pile[h - 2];
                --h;
            } else if (strcmp(mot, REM) == 0 && h >= 2) {
                printf("%s \t operator \n", mot);
                pile[h - 2] = pile[h - 1] % pile[h - 2];
                --h;
            } else if (strcmp(mot, END) == 0 && h == 1) {
                printf("%ld", pile[h - 1]);
                --h;
            } else {
                printf("rejected form \n");
            }
        }
    }

    return EXIT_SUCCESS;
}
