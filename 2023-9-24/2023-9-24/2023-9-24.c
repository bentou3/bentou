#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void reverse_string(char* string) {
    if (*string == '\0') {
        return; // �ݹ���ֹ�������ַ���������
    }
    reverse_string(string + 1);  // �ݹ���ã�������һ���ַ�
    printf("%c", *string); // ��ӡ��ǰ�ַ�
}

int main() {
    char arr[] = "abcdef";
    printf("ԭʼ�ַ�����%s\n", arr);
    printf("�������к���ַ�����");
    reverse_string(arr);
    printf("\n");
    return 0;
}
