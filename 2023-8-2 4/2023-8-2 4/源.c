#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // ����Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int arr[], int size) {
    printf("���������飺");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 4, 2, 8, 5, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // ����ð��������
    bubble_sort(arr, size);

    // ��ӡ����������
    print_array(arr, size);

    return 0;
}
