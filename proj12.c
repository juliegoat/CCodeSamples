#include <stdlib.h>
#include <stdio.h>

void convert(float x);

void main(){
	//Do not change this function
	float amount;

	printf("Enter the amount: $");
	scanf("%f", &amount);
	convert(amount);

	system("\nPause");
}

void convert(float amount){
	int amountz = amount*100;

	int dollars = amountz/100;
	amountz= amountz%100;
	int halfdollars = amountz/50;
	amountz = amountz%50;
	int quarters = amountz/25;
	amountz = amountz%25;
	int dimes = amountz/10;
	amountz = amountz%10;
	int nickles = amountz/5;
	amountz = amountz%5;
	int pennies= amountz;

	printf("dollars \t%i\n", dollars);
	printf("halfdollars \t%i\n", halfdollars);
	printf("quarters \t%i\n", quarters);
	printf("dimes \t\t%i\n", dimes);
	printf("nickles \t%i\n", nickles);
	printf("pennies \t%i\n", pennies);

}