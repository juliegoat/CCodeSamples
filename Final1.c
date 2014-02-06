//#include "stdafx.h"

#include <stdio.h>

#include <stdlib.h>

int main()

{

 // Complete this function.

 float car; // The value of the car.

 int age; // The age of the driver

 int tickets; // The number of tickets.

 float premium; // To be used to calculate the premium.

 printf("Enter the value of the car: ");

 scanf("%f", &car);

 printf("Enter the driver's age: ");

 scanf("%i", &age);

 printf("Enter the number of tickets: ");

 scanf("%i", &tickets);

 if(car >= 300 && car <= 1000000){

	 if(age >= 18 && age <= 24){

 		if(tickets == 1){

 		premium = (car * .05) + (car * .15) + (car * .10);

 		}

		else

 		if(tickets == 2){

 		premium = (car * .05) + (car * .15) + (car * .25);

		}

 		else

 		if(tickets == 3){

 		premium = (car * .05) + (car * .15) + (car * .50);

 		}

 	}

 	else

 	if(age >= 25 && age <= 140){

 		if(tickets == 1){

 		premium = (car * .05) + (car * .10) + (car * .10);

 		}

 		else 
 		if(tickets == 2){

 		premium = (car * .05) + (car * .10) + (car * .25);

 		}

 		else

 		if(tickets == 3){
 		premium = (car * .05) + (car * .10) + (car * .50);

 		}


 	}

 }

 if(car < 300 || car > 1000000 || age < 18 || age > 140 || tickets > 3 || tickets < 0 ){

 printf("Coverage denied.\n");

 }

 else{

 printf("PREMIUM: %.2f\n", premium);

 }


}
