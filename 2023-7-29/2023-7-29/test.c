#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* p = &a;
	*p = 0;
	//int* p=&a;//int*
	//*p=0;
	return 0;
}