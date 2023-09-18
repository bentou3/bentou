#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int main()
{
	char arr1[] = "振兴中华  勿忘国耻";
	char arr2[] = "******************";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]);
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		system("cls");
		left++;
		right--;
		printf("%s\n", arr2);
	}
	return 0;
}
