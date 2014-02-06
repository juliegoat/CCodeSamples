#include <stdio.h>
#include <stdlib.h>

int main(){

	int numofAnts;
	int breedingRate;
	int i = 0;
	int antTotal;
	int Day=0;

	printf("How many ants? ");
	scanf("%i", &numofAnts);

	printf("What is the breeding rate? ");
	scanf("%i", &breedingRate);

	printf("Day \t\t Ants \n");

	for(i=breedingRate;i>0;i--){
		Day++;
		antTotal=numofAnts*breedingRate;
		numofAnts=antTotal;
		printf("%i \t\t %i\n", Day, antTotal);
	}

}