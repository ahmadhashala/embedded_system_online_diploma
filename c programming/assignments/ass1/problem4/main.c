/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */

#include <stdio.h>
void main ()
{
	float first_number,second_number;
	float result;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&first_number,&second_number);
	result=first_number*second_number;
	printf("Product: %f",result);
}
