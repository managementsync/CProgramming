#include <stdio.h>
#include <string.h>
#include <conio.h>

void pattern()
{
	int ind;
	scanf_s("%d", &ind);

	for (int i = 0; i < ind; i++)
	{

		int a, b, c;
		

		scanf_s("%d %d %d", &a, &b, &c);
		++c;

		for (int i = 0; i < (a * c) + 1; i++)
		{
			for (int j = 0; j < (b * c) + 1; j++)
			{
				if(i % c == 0 || j % c == 0)
				{
					printf("*");
				
				}

				else if ((i / c + j /c) % 2 == 0)
				{
					
					printf("\\");
					
					
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

