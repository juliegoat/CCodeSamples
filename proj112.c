//include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

	int m, i, n;
	float a[100];

	printf("Enter the number of values to be put into the array: ");
	scanf("%i", &n);

	n = n-1;

	for(i = 0; i <= n; i++){
	scanf("%f", &a[i]);
	}

	printf("Enter the index of the array to replace: ");
	scanf("%i", &m);
	printf("To be replaced with: ");
	scanf("%f", &a[m]);

	for(i = 0; i <= n; i++){
	printf("%.2f ", a[i]);
	}

	printf("\n");


}