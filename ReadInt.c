#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int number = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);
    printf("Your number is %d.\n", number);

    return 0;
}