#include <stdio.h>
#include <conio.h>


int main()
{
	int a;
	scanf_s("%d", &a);

	printf("W");

	while (a-- && a >= 0)
	{
		printf("o");


	}
	printf("w\n");

	_getch();
    return 0;
}

