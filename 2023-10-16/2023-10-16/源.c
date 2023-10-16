#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        printf("ÔªËØÎ´ÕÒ
            [Something went wrong, please try again later.]