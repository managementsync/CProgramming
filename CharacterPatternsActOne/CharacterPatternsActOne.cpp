#include <stdio.h>
#include <string.h>
#include <conio.h>

void pattern(int ind)
{
	scanf_s("%d", &ind);
	int a, b;
	for (int i = 1; i <= ind; i++)
	{
		scanf_s("%d %d", &a, &b);
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (i % 2 == 0 && j % 2 != 0 || i % 2 != 0 && j % 2 ==0)
				{
					printf(".");

				}

				else
				{
					printf("*");

				}
				printf("\n");
			}
			
		}
	}

}


int main()
{
	int c = 0;
	pattern(scanf_s("d", c));
	printf("*\n.\n");


	_getch();
	return 0;
}

