/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main ()
{
	float number;
	printf("enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&number);
	if (number>0) printf("the number is positive");
	else if (number == 0) printf("the number is zero");
	else printf("the number is negative");

}

