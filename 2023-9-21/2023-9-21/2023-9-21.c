#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("ÇëÊäÈëÒ»¸ö×Ö·û´®: ");
    fgets(str, sizeof(str), stdin);

    // ÒÆ³ý»»ÐÐ·û
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("ÄæÐòºóµÄ×Ö·û´®: %s\n", str);

    return 0;
}
