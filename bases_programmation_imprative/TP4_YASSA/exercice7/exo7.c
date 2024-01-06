#include <stdio.h>
#include <stdlib.h>

void trie (float *x,float *y,float *z);

int main(void) {
  float a,b,c;
  printf ("entrez trois reels:");
  if (scanf("%f\n%f\n%f",&a,&b,&c) != 3) {
    printf ("Erreur de saisir"); 
    exit (EXIT_FAILURE); }
  trie (&a,&b,&c);
  printf ("lordre croissant des trois variables donnees est : %f\n%f\n%f",a,b,c);
  return EXIT_SUCCESS; 
}

void trie (float *x,float *y,float *z){
float a,b,c;
a=*x;b=*y;c=*z;

if (a>=b) { 
  if (b>=c) {
    *x=c;
    *y=b;
    *z=a; }
    else {if (b<=c) {
      if (a>=c) {
      *x=b;
      *y=c;
      *z=a; }
     else if (a<=c) {
       *x=b;
       *y=a;
       *z=c; }
else {if (a<=b) {
  if (b>=c) {
    if (a>=c) {
      *x=c;
      *y=a;
      *z=b; }
      else if (a<=c) {
        *x=a;
        *y=c;
        *z=b; }}
        else if (b<=c) {
          *x=a;
          *y=b;
          *z=c; }}}}}}}
  
