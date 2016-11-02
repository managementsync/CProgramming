#include <stdio.h>
#include <conio.h>


void DivXY()
{
	int test, n, x, y;
	scanf_s("%d", &test);
	for (int i = 0; i < test; i++)
	{
		scanf_s("%d %d %d", &n, &x, &y);
		for (int j = 1; j < n; j++)
		{
			if (j % x == 0 && j % y != 0)
			{
				printf("%d ", j);

			}


		}
		printf("\n");
	}
}

int main()
{
	DivXY();
	_getch();
	return 0;
}

