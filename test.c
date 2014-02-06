//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *inFile;
  int x, b, n = -1, i;
  int a[10000];

  inFile = fopen("a.txt", "r");
  b = fscanf(inFile, "%d", &x);
  while(b != -1){
    n++;
    a[n] = x;
    b = fscanf(inFile, "%d", &x);
  }
  for (i = n; i >= 0; i--)
    printf("%d	", a[i]);
  printf("\n");
  fclose(inFile);

  system("Pause");
}
