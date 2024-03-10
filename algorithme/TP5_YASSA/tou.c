#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  struct
  {
    int gyear;
    int month;
    int mday;
  } date;
  float tx; // température maximale
  float tn; // température minimale
  float rr; // précipitations
  float w;  // ensoleillement
} report;

const char *calculTout(const char *filename, int *nbjourptr, float *moyW, float *maxTx );
static int freport_csv_get(FILE *f, report *p, int annee);
int getYear(const char *filename);
#define MSR_FORMAT "%6.d j"

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Syntax: %s [FILE]...\n", argv[0]);
    return EXIT_SUCCESS;
  }

  for (int k = 1; k < argc; ++k)
  {
    int nbjour;
    float moyenneSoleilW;
    float maxTempTx;
    const char *r = calculTout(argv[k], &nbjour, &moyenneSoleilW, &maxTempTx);
    if (r != NULL)
    {
      fprintf(stderr, "%s: %s '%s'\n", argv[0], r, argv[k]);

    }
    else
    {
      printf(MSR_FORMAT"\t %6.1f h\t %s\n", nbjour, moyenneSoleilW, argv[k]);
    }
  }

  return EXIT_SUCCESS;
}

static int freport_csv_get(FILE *f, report *p, int annee)
{

  int count;

  if (annee == 2004 || annee == 2005 || annee == 2006)
  {
    count = fscanf(f, "%d\t%d\t%d\t%f\t%f\t%f\n",
                   &p->date.gyear,
                   &p->date.month,
                   &p->date.mday,
                   &p->tx,
                   &p->tn,
                   &p->rr);
    p->w = -1;
    if (count != 6)
    {
      return -1;
    };
  }
  else
  {
    count = fscanf(f, "%d\t%d\t%d\t%f\t%f\t%f\t%f\n",
                   &p->date.gyear,
                   &p->date.month,
                   &p->date.mday,
                   &p->tx,
                   &p->tn,
                   &p->rr,
                   &p->w);
    if (count != 7)
    {
      return -1;
    };
  }

  return 0;
}

const char *calculTout(const char *filename, int *nbjourptr, float *moyW, float *maxTx )
{
  int annee = getYear(filename);

  FILE *f = fopen(filename, "r");
  if (f == NULL)
  {
    return "Error when opening for reading file";
  }
  if (fgetc(f) == EOF)
  {
    printf("Your file is empty!");
    fclose(f);
    exit(EXIT_FAILURE);
  }
  report x;
  int compteur = 0;
  float somme_soleil_w = 0.0;
  float compteur_soleil_w =0.0;
  int rg = freport_csv_get(f, &x, annee);

  while (rg == 0)
  {
    if (annee != 2004 || annee != 2005 || annee != 2006)
  {
    somme_soleil_w+=x.w;
    compteur_soleil_w++;
  }
    if (x.tx >= 30.0)
    {
      compteur++;
    }

    rg = freport_csv_get(f, &x, annee);
  }
  if (!feof(f))
  {
    fclose(f);
    return "Error while processing file";
  }
  if (fclose(f) != 0)
  {
    return "Error on closing file";
  }

  *nbjourptr = compteur;
  if (annee != 2004 || annee != 2005 || annee != 2006)
  {
     *moyW=somme_soleil_w/compteur_soleil_w;
  }

  return NULL;
}
int getYear(const char *filename)
{
  FILE *f;
  f = fopen(filename, "r"); // Ouverture du fichier en mode lecture
  int annee;
  if (fscanf(f, "%d", &annee) == 1)
  {
    fclose(f);
    return annee;
  }
  else
  {
    fclose(f);
    return -1;
    // printf("Impossible de lire l'année.\n");
  }
}
