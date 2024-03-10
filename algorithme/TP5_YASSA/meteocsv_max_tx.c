
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
  struct {
    int gyear;
    int month;
    int mday;
  } date;
  float tx; // température maximale
  float tn; // température minimale
  float rr; // précipitations
  float w;  // ensoleillement
} report;

const char *sum_rr(const char *filename, float *maxptr);
static int freport_csv_get(FILE *f, report *p);

#define MSR_FORMAT  "%6.f °"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Syntax: %s [FILE]...\n", argv[0]);
    return EXIT_SUCCESS;
  }
  
  for (int k = 1; k < argc; ++k) {
    float max;
    const char *r = sum_rr(argv[k], &max);
    if (r != NULL) {
      fprintf(stderr, "%s: %s '%s'\n", argv[0], r, argv[k]);
    } else {
      printf(MSR_FORMAT "\t%s\n", max, argv[k]);
    }
  }
  
  return EXIT_SUCCESS;
}

static int freport_csv_get(FILE *f, report *p) {
  if (fscanf(f, "%d%d%d%f%f%f%f",
      &p->date.gyear,
      &p->date.month,
      &p->date.mday,
      &p->tx,
      &p->tn,
      &p->rr,
      &p->w) != 7) {
    return -1;
  }
  
  return 0;
}

const char *sum_rr(const char *filename, float *maxptr) {
 
  FILE *f = fopen(filename, "r");
  if (f == NULL) {
    return "Error when opening for reading file";
  }
  if (fgetc(f) == EOF) {
    printf("Your file is empty!");
    fclose(f);
    exit(EXIT_FAILURE);
  }
  report x;
  float max=NAN;



  while (freport_csv_get(f, &x) == 0) {
   if (isnan(max) || x.tx>max) {
       max=x.tx;
    }  
  }
  if (!feof(f)) {
    fclose(f);
    return "Error while processing file";
  }
  if (fclose(f) != 0) {
    return "Error on closing file";
  }
  *maxptr = max;
  
  return NULL;
}


