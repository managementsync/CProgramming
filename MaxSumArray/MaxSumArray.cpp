#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void MaxSum()
{
	int test, n, k;
	int *arr;
	int count = 0;

	scanf_s("%d", &test);

	for (int i = 0; i < test; i++)
	{
		scanf_s("%d", &n);
		arr = (int*)malloc(n*sizeof(int));
		int sizeArr = sizeof(arr) / sizeof(arr[0]);
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &arr[j]);
			
			for (int l = 0; l < sizeArr; l++)
			{
				scanf_s("%d", &k);
				count = count + arr[l];
			}
			printf("%d", count);
		}
		
		free(arr);
	}
	

}

int main(void) {

	MaxSum();
	_getch();
	return 0;
}

