/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */

#include <stdio.h>
void main ()
{
	int first_integer,second_integer;
	int sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&first_integer,&second_integer);
	sum=first_integer+second_integer;
	printf("Sum: %d",sum);
}
