#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void MaxSum()
{
	int test, n;
	int *arr;

	scanf_s("%d", &test);

	for (int i = 0; i < test; i++)
	{
		scanf_s("%d", &n);
		arr = (int*)malloc(n*sizeof(int));
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] < 0)
			{
				abs(arr[j]);
				
			}
			count = count + arr[j];

		}
		printf("%d\n", count);
		free(arr);
	}
	

}

int main(void) {

	MaxSum();
	_getch();
	return 0;
}

