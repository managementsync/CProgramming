#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, count = 0, tmp, tmp2;
	scanf_s("%d %d", &a, &b);
	tmp = a * a;
	for (int i = a; i <= b; i++)
	{	
		tmp2 = i * i;
		count = count + tmp2;

	}
	
	printf("%d", count);

	_getch();
    return 0;
}

