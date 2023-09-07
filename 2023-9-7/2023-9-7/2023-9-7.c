#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void findLilyNumbers() {
    for (int num = 10000; num <= 99999; num++) {
        int left = num / 1000;
        int right = num % 1000;
        int sum = 0;

        while (right > 0) {
            sum += left * (right % 10);
            left *= 10;
            right /= 10;
        }

        if (sum == num) {
            printf("%d ÊÇÒ»¸ö Lily Number\n", num);
        }
    }
}

int main() {
    findLilyNumbers();

    return 0;
}
