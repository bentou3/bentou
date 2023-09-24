#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void reverse_string(char* string) {
    if (*string == '\0') {
        return; // 递归终止条件，字符串结束符
    }
    reverse_string(string + 1);  // 递归调用，传入下一个字符
    printf("%c", *string); // 打印当前字符
}

int main() {
    char arr[] = "abcdef";
    printf("原始字符串：%s\n", arr);
    printf("反向排列后的字符串：");
    reverse_string(arr);
    printf("\n");
    return 0;
}
