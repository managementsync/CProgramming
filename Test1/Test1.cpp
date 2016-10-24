#include <stdio.h>
#include <string.h>
#include <conio.h>

void printhalf(char s[]);

void printhalf(char s[])
{
	
	int len = strlen(s) / 2;

	for (int i = 0; i < len; i = i + 2)
	{
		printf("%c", s[i]);
	}
	printf("\n");
	
}

int main()
{
	char str[200];
	int t;
	scanf_s("%d", &t);
	

	while (t > 0) {
		scanf_s("%s", str, 200);
		printhalf(str);
		t--;
	}


	
	_getch();
	return 0;
}

