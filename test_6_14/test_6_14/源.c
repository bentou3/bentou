#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
		i = 5;
	}
	return 0;
}