//#include "stdafx.h"

#include <stdio.h>

#include <stdlib.h>

#include <time.h>

int main()

{

 // Complete this function.

 int n; // To store the random number.

 float feet = 1; // To be used to store 1, 1.5, 2, 2.5, …, feet.

 double meters = 0.3048;

 printf("FEET TO METER CONVERSION TABLE\n");

 printf("FEET\tMETERS\n");

 srand(time(0));

 n = rand() % 10;

 for (feet = 1; feet <= n; feet += .5) 

 {

 printf("%.1f\t%.4f\n", feet, meters);

 meters += 0.1524;

 }

 system("Pause");

}