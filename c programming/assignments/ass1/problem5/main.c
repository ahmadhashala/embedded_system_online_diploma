/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main()
{
	char alpha;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	printf("ASCII value of %c = %d",alpha,alpha);
}
