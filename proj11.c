//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *inFile;
int n = -1, i;
char x;
int a[1000];

inFile = fopen("a.txt", "r");
fscanf(inFile, "%c", &x);
while(x != NULL){
    n++;
    a[n] = x;
    x = fscanf(inFile, "%c", &x);
  }

for (i = n; i >= 0; i--)
    printf("%d", a[i]);
  printf("\n");
  fclose(inFile);

system("Pause");
}