#include <stdio.h>
#include <conio.h>


int main(void) {

	int test, a, b;
	scanf_s("%d\n", &test);

	for (int i = 0; i < test; i++) {
		scanf_s("%d %d", &a, &b);
		if (a == 1)
		{

			a++;
		}

		for (int j = a; j <= b; j++) {
			
			if (j / j != 1 || j / 1 != 1)
			{

				printf("%d\n", j);

			}

		}

	}

	_getch();
	return 0;
}

