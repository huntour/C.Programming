#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int x = 0;

	printf("Please enter a number: ");
	scanf("%d", &x);

	if (x < 0)
		printf("Negative.\n"); //Lower than 0 circumstance

	if (x > 10)
		printf("Large.\n"); //Greater than 10 circumstance

	else
		printf("Perfect.\n"); //0-10 circumstance
}
