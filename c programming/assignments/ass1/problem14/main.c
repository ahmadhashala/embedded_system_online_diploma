/*
 * main.c
 *
 *  Created on: May 2, 2023
 *      Author: ahmed
 */
#include <stdio.h>
int sum(int num)
{
	for(int i=0;i<num;i++)
	{
		return num*sum(num-1);
	}
	return 1;
}
void main ()
{
	int num;
	printf("enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num<0) printf("ERROR!!! Factorial of negative number doesn't exist.");
	else if(num==0) printf("Factorial= 1");
	else printf("Factorial= %d",sum(num));
}

