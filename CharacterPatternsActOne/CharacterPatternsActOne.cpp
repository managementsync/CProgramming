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
	}

}


int main()
{
	pattern(3);
	printf("*\n.\n");


	_getch();
	return 0;
}

