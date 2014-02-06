//#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{

	int seconds;

	printf("How many seconds? ");
	scanf("%i", &seconds);

	int days=seconds/86400;
	seconds=seconds%86400;
	int hours=seconds/3600;
	seconds=seconds%3600;
	int minutes=seconds/60;
	seconds=seconds%60;

	printf("days \t%i\n", days);
	printf("hours \t%i\n", hours);
	printf("minutes \t%i\n", minutes);
	printf("seconds \t%i\n", seconds);

	system("Pause");
}