#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

// 初始化数组
void initArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 计算数组元素之和
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int array[ARRAY_SIZE];

    initArray(array, ARRAY_SIZE);

    printf("生成的随机数组为: ");
    printArray(array, ARRAY_SIZE);

    int sum = sumArray(array, ARRAY_SIZE);
    printf("数组元素之和为: %d\n", sum);

    return 0;
}
