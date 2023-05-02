/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main ()
{
	float a,b,c ;
	printf("enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if (a>b&&a>c) printf("largest number= %f",a);
	else if (b>a&&b>c) printf("largest number= %f",b);
	else printf("largest number= %f",c);

}
