#include<stdio.h>
void main()
{

int i,j,n;
printf("Enter number to print pattern");
	scanf("%d",&n);
	for (i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}