/*
 * main.c
 *
 *  Created on: Apr 26, 2023
 *      Author: ahmed
 */

#include <stdio.h>
void main ()
{
	char alpha;
	printf("enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	if (alpha=='a'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='e'||alpha=='A'||alpha=='E'||alpha=='O'||alpha=='U'||alpha=='I') printf("%c is a vowel",alpha);
	else printf("%c is consonant",alpha);

}
