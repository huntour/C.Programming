#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	This program prints my name, my course number,
	and which computer science classes I've taken.
	The program then prompts the user to enter 2 integers,
	and prints the sum, difference, product, and quotient.

	Written by Hunter Chavarela
	CS36 6/28/2021
*/

int main()

{
	printf("My name is Hunter Chavarela, I'm in course #60270, ");
	printf("and the computer science courses I've taken are:\n\n");
	printf("CS 1\nCS 36.\n\n");

	int num1; // Initializes integers to
	int num2; // be entered by user

	printf("\nPlease input a number: "); // Prompts user to input a number
	scanf("%d", &num1);
	printf("Your first number is %d.\n", num1);

	printf("\nPlease input a second number: "); // Prompts user to input a second number
	scanf("%d", &num2);
	printf("Your second number is %d.\n\n\n", num2);

	int sum, difference, product, quotient; 

	sum = num1 + num2; // Adds the two numbers
	difference = num1 - num2; // Subtracts the two numbers
	product = num1 * num2; // Multiplies the two numbers
	quotient = num1 / num2; // Divides the two numbers

	// The next four statements prints all the mathematic solutions for the user.
	printf("The sum of the two numbers is %d. \n", sum); 
	printf("The difference of the two numbers is %d. \n", difference);
	printf("The product of the two numbers is %d. \n", product);
	printf("The quotient of the two numbers is %d. \n\n", quotient);

}


//My name is Hunter Chavarela, I'm in course #60270, and the computer science courses I've taken are :

//CS 1
//CS 36.


//Please input a number : 15
//Your first number is 15.

//Please input a second number : 5
//Your second number is 5.


//The sum of the two numbers is 20.
//The difference of the two numbers is 10.
//The product of the two numbers is 75.
//The quotient of the two numbers is 3.

//Press any key to continue . . .