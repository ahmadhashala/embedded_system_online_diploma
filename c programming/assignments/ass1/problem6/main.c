/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */

#include <stdio.h>
void main ()
{
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	printf("After swapping, value of a = %f",b);
	printf("\nAfter swapping, value of b = %f",a);

}
