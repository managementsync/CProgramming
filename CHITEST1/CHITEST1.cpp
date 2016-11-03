#include <stdio.h>
#include <conio.h>

int main()
{
	int test, a, b;
	scanf_s("%d\n", &test);
	for (int i = 0; i < test; i++)
	{
		
		scanf_s("%d %d", &a, &b);
		if(a)
		printf("%d\n", a + b);

	}

	_getch();
    return 0;
}

