#include <stdio.h>
#include <conio.h>
#include <string.h>

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
				//first and last lines in the colums
				if(i == 0 || i == a - 1)
				{
					printf("*");
				}
				//first and last lines in the rows
				else if (j == 0 || j == b - 1)
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

