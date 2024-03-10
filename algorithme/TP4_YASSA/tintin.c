//avec fonction
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define NAME_LENGTH_MAX 63

typedef struct
{
  char lastname[NAME_LENGTH_MAX + 1];  //  nom
  char firstname[NAME_LENGTH_MAX + 1]; //  prénom(s)
  int yearfirstapp;                    //  année de première apparition
} personne;

typedef struct
{
  enum
  {
    NUMBER,
    STRING
  } category;
  union
  {
    long int number;
    const char *string;
  } u;
} parameter;

const char *parameter_initialize(parameter *p, const char *s);
void parameter_execute(parameter *p, const personne *q, size_t n);

int main(int argc, char *argv[])
{
  personne etudiants[] = {
      {"Ben Kalish Ezab", "Abdallah", 1950},
      {"Ben Salaad", "Omar", 1941},
      {"Alcazar", "Peggy", 1976},
      {"Bolivar", "Hippolyte", 1932},
      {"Haddock", "Archibald", 1941},
      {"Bada", "Ramon", 1937},
      {"Wagner", "Igor", 1939},
      {"Charlet", "Marc", 1948},
      {"Perez", "Alonzo", 1937},
      {"Bazaroff", "Basil", 1937},
      {"Ben Moulfrid", "Youssouf", 1950},
      {"Tortilla", "Rodrigo", 1937},
      {"Cartoffoli", "Arturo Benedetto Giovanni Giuseppe Pietro Archangelo Alfredo", 1956},
      {"Boullu", "Isidore", 1963},
      {"Capone", "Al", 1932},
      {"Sakharine", "Ivan Ivanovitch", 1943},
      {"Topolino", "Alfredo", 1956},
      {"Tournesol", "Tryphon", 1945},
      {"Thompson", "Allan", 1934},
      {"Lampion", "Seraphin", 1956},
      {"Rastapopoulos", "Roberto", 1934},
      {"Castafiore", "Blanca", 1939},
      {"Zarate", "Ramon", 1948},
      {"Bergamotte", "Hippolyte", 1948},
      {"Szprinkoth", "Stephan", 1956},
      {"Ben Mahmoud", "Ali", 1950},
  };

  if (argc < 2)
  {
    printf("At least one parameter is expected\n Syntax : ./nomfichier.exe VALUE...\n");
    exit(EXIT_FAILURE);
  }

  for (int j = 1; j < argc; ++j)
  {
    parameter unArgument;

    const char *error = parameter_initialize(&(unArgument), argv[j]);
    if (error != NULL)
    {
      printf("Error: %s\n", error);
      exit(EXIT_FAILURE);
    }
    parameter_execute(&(unArgument), etudiants, sizeof(etudiants) / sizeof(etudiants[0]));
  }

  return 0;
}

const char *parameter_initialize(parameter *p, const char *s)
{
  char *endptr;
  errno = 0;
  long int resultat = strtol(s, &endptr, 10);
  if (errno == ERANGE)
  {
    return "Value out of range";
  }
  else if (*endptr == '\0' && errno == 0)
  {
    p->category = NUMBER;
    p->u.number = resultat;
  }
  else
  {
    p->category = STRING;
    p->u.string = s;
  }

  return NULL;
}

void parameter_execute(parameter *p, const personne *q, size_t n)
{
  if (p->category == NUMBER)
  {
    printf("--- characters appearing for the first time in '%ld'\n", p->u.number);

    for (size_t k = 0; k < n; k++)
    {
      if (q[k].yearfirstapp == p->u.number)
      {
        printf("%s %s \n", q[k].firstname, q[k].lastname);
      }
    }
  }
  else if (p->category == STRING)
  {
    printf("--- characters whose first or last names contain '%s'\n", p->u.string);

    for (size_t k = 0; k < n; k++)
    {
      if (strstr(q[k].firstname, p->u.string) != NULL || strstr(q[k].lastname, p->u.string) != NULL)
      {
        printf("%s %s \n", q[k].firstname, q[k].lastname);
      }
    }
  }
}
