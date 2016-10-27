#include <stdio.h>
#include <conio.h>
#include <string.h>

void pattern()
{
	int ind;
	scanf_s("%d", &ind);
	int a, b, c, d;

	for (int k = 0; k < ind; k++)
	{

		scanf_s("%d %d %d %d", &a, &b, &c, &d);

		++c;
		++d;

		a = c * a + 1;
		b = d * b + 1;

		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if(i % c == 0 || j % d == 0 )
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

