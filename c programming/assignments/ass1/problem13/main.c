/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main ()
{
	char alpha;
	printf("enter a charcter: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	if ((alpha>=65 && alpha <=90)||(alpha>=97 && alpha<=122)) printf("is an alphabert");
	else printf("is not an alphabet");

}

