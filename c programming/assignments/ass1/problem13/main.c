/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: ahmed
 */


#include <stdio.h>
int sum(int num)
{
	for(int i=0;i<num;i++)
	{
		return num+sum(num-1);
	}
	return 0;
}
void main ()
{
	int num;
	printf("enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("sum= %d",sum(num));
}
