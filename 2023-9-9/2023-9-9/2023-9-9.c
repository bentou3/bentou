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
    printf("������һ��������: ");
    scanf("%d", &n);

    int result = sum_of_primes(n);
    printf("�� %d �������������ĺ�Ϊ: %d\n", n, result);

    return 0;
}
