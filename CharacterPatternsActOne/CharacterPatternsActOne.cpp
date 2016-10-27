#include <stdio.h>
#include <string.h>
#include <conio.h>

void pattern()
{
	int ind;
	scanf_s("%d", &ind);
	int a, b;
	for (int i = 1; i <= ind; i++)
	{
		scanf_s("%d %d", &a, &b);
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if ((i + j) % 2 == 0)
				{
					printf("*");

				}

				else
				{
					printf(".");

				}
				
				
			}
			printf("\n");
		}
		printf("\n");
	}

}


int main()
{
	
	pattern();
	


	_getch();
	return 0;
}

