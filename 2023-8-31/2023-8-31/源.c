#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdint.h>

int countDifferentBits(uint32_t num1, uint32_t num2) {
    uint32_t xorResult = num1 ^ num2;
    int count = 0;

    while (xorResult != 0) {
        if (xorResult & 1) {
            count++;
        }

        xorResult >>= 1;
    }

    return count;
}

int main() {
    uint32_t num1, num2;

    printf("请输入第一个整数: ");
    scanf("%u", &num1);

    printf("请输入第二个整数: ");
    scanf("%u", &num2);

    int diffCount = countDifferentBits(num1, num2);

    printf("两个整数二进制格式有 %d 个位不同\n", diffCount);

    return 0;
}
