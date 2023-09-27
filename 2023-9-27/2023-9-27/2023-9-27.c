#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char arr1[] = " good good study, day day up";
	char arr2[] = "****************************";
	int left = 0;
	int right = strlen(arr1);
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		left++;
		right--;
		system("cls");
		printf("%s", arr2);
	}
	return 0;
}