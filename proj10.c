#include <stdio.h>
#include <stdlib.h>

int main()
{
	float min;
	float temp;
	int numOfLoop;
	int i = 0;
 
	printf("How many executions? ");
	scanf("%i", &numOfLoop);

	printf("Enter a number: ");
	scanf("%f", &min);
	numOfLoop--;

	for(i=numOfLoop; i>0; i--){
	printf("Enter a number: ");
	scanf("%f", &temp);
		if(temp<min){
		min=temp;
		}	
	}

	printf("The smallest number is: %f\n", min);

	system("Pause");
}