/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main()
{
	int integer_number;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&integer_number);
	printf("\r\n You entered: %d",integer_number);

}
