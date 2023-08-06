#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ret = 1;
	int i = 1;
	int n= 1;
	int j = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}