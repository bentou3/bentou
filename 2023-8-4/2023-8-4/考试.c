#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *right;
		*right=*left;
		*left = tmp;
		left++;
		right--;
	}
}

int main() 
{
    char arr[101] = { 0 };
    //abcdef ghi qwer\0
    //scanf("%s", arr);
    gets(arr);
    //scanf("%[^\n]s", arr);
    int ch = 0;
    int i = 0;
    while ((ch = getchar()) != '\n')
    {
        arr[i++] = ch;
    }
    int len = strlen(arr);
    //1. 逆序整个字符串
    reverse(arr, arr + len - 1);
    //2. 逆序每个单词
    char* cur = arr;
    while (*cur)
    {
        char* start = cur;
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        char* end = cur - 1;
        reverse(start, end);//逆序一个单词
        if (*cur == ' ')
            cur++;
    }
    printf("%s\n", arr);
    return 0;
}