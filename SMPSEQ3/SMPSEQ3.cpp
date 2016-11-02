#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int BinarySearch(int array[], int n, int x)
{

	int low = 1;
	int upper = array[sizeof(array) / sizeof(array[0])];
	

	for (int i = 0; i < n; i++)
	{
		if(upper < low)
		{
			return -1;
		}

		int mid = low + (upper - low) / 2;

		if(array[mid] < x)
		{
		
			low = mid + 1;
		}

		if(array[mid] > x)
		{
		
			upper = mid - 1;
		}

		if(array[mid] == x)
		{
		
			return x;
		}

	}
	return 0;
}

int main()
{
	int n, x, i;

	scanf_s("%d", &n);
	int *s_ = (int*)malloc(n*sizeof(int));
	
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &s_[i]);

	}


	_getch();
    return 0;
}

