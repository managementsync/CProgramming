#include <stdio.h>
#include <conio.h>


int main(void) {

	int test, a, b;
	scanf_s("%d\n", &test);

	for (int i = 0; i < test; i++) {
		scanf_s("%d %d", &a, &b);

		for (int j = a; j <= b; j++) {
			if (a == 1 || a == 2)
			{

				continue;
			}

			if (b % j == 0)
			{

				printf("%d\n", j);

			}

		}

	}

	_getch();
	return 0;
}

