/*
 ============================================================================
 Name        : Pattern_1.c
 Author      : Mohamed Ashraf
 Version     :
 Copyright   : Your copyright notice
 Description : Pattern 1, Ansi-style
 ============================================================================
 */

/*
if you entered rows = 5, then the pattern will be :

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <stdio.h>

int main()
{
	int i , j , rows = 0 ;

	printf("Enter the number of lines :  ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&rows);

	printf("\n");

	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0 ;
}
