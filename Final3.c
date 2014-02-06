//#include "stdafx.h"

#include <stdio.h>

#include <stdlib.h>

// The function: process is called to checks the operation. If it is +, -, or * calls the

// function: add, sub, or mult respectively.

void process(float operand1, char operation, float operand2); 

void add(float operand1, float operand2); //Displays the sum of the operands.

void sub(float operand1, float operand2); //Displays the difference of the 

void mult(float operand1, float operand2); //Displays the product of the operands.

void divi(float operand1, float operand2); //Displays the quotient of the operands.

int main()

{

 // This function is complete. Do not change it.

 float operand1, operand2;

 char operation = ' ';

 printf("Enter an expression: ");

 scanf("%f", &operand1);

 do scanf("%c", &operation); while(operation == ' ' || operation == '\t');

 scanf("%f", &operand2);

 process(operand1, operation, operand2);

// system("Pause");

}

void process(float operand1, char operation, float operand2)

{

if (operation == '*')
{
mult(operand1, operand2);
}
if (operation == '+')
{
add(operand1, operand2);
}
if (operation == '-')
{
sub(operand1, operand2);
}
if (operation == '/')
{
divi(operand1, operand2);
}
return;
}

void add(float operand1, float operand2)

{

printf("Your expression’s sum is: %.2f\n", operand1 + operand2);

return;

}

void sub(float operand1, float operand2)

{


printf("Your expression’s difference is: %.2f\n", operand1 - operand2);


return;

}

void mult(float operand1, float operand2)

{


printf("Your expression’s multiplication is: %.2f\n", operand1 * operand2);

return;

}

void divi(float operand1, float operand2)

{
if (operand2==0){
printf("Error: Cannot divide by zero. Are you TRYING to create a blackhole?!/n");
}
else{	
printf("Your expression’s division is: %.2f\n", (float)operand1 / (float)operand2);
	}
return;

}

