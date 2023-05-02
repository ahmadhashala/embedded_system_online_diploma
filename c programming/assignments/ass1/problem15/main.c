/*
 * main.c
 *
 *  Created on: May 2, 2023
 *      Author: ahmed
 */
#include <stdio.h>
void main()
{
	char operator;
	float num1,num2;
	printf("enter operator either + or - or * or divide: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);
	printf("enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);
	if(operator=='+') printf("%f + %f= %f",num1,num2,(num1+num2));
	else if(operator=='-') printf("%f - %f= %f",num1,num2,(num1-num2));
	else if(operator=='*') printf("%f * %f= %f",num1,num2,(num1*num2));
	else if(operator=='/') {
		if(num2==0) printf("%f / %f = infinity",num1,num2);
		else printf("%f / %f= %f",num1,num2,(num1/num2));
	}
}

