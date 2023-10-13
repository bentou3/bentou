#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

// ��ʼ������
void initArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

// ��ӡ����
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ��������Ԫ��֮��
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

    printf("���ɵ��������Ϊ: ");
    printArray(array, ARRAY_SIZE);

    int sum = sumArray(array, ARRAY_SIZE);
    printf("����Ԫ��֮��Ϊ: %d\n", sum);

    return 0;
}
