/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main ()
{
	int number;
	printf("enter an integer you want to check ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	if(number%2==0) printf("%d is even",number);
	else printf("%d is odd",number);
}
