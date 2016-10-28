#include <stdio.h>
#include <string.h>
#include <conio.h>

void pattern()
{
	int ind;
	scanf_s("%d", &ind);
	int a, b;

	for (int i = 0; i < ind; i++)
	{
		scanf_s("%d %d", &a, &b);

		for (int i = 0; i < (a*3) + 1; i++) // doesnt fill just for controlling the inner loop
		{
			for (int j = 0; j < (b*3) + 1; j++) //fills row
			{
				if (i % 3 == 0 || j % 3 == 0)
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

