#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sum_of_primes(int n) {
    int prime_sum = 0;
    for (int num = 2; num <= n; num++) {
        if (is_prime(num)) {
            prime_sum += num;
        }
    }
    return prime_sum;
}

int main() {
    int n;
    printf("请输入一个正整数: ");
    scanf("%d", &n);

    int result = sum_of_primes(n);
    printf("在 %d 以内所有素数的和为: %d\n", n, result);

    return 0;
}
