#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;

int main()
{
	printf("Enter the number : ");
	scanf("%d", &a);
	if (a < 0)
	{
		while (a < 0)
		{
			printf("Please insert the number that is greater or equal zero : ");
			scanf("%d", &a);
			if (a >= 50)
			{
				printf("You Pass!");
			}
			else
			{
				printf("You Fail!");
			}
		}

	}
	else if (a >= 50)
	{
		printf("You Pass!");
	}
	else
	{
		printf("You Fail!");
	}
}