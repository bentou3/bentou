#define  _CRT_SECURE_NO_WARNINGS 1#include <stdio.h>

void swap_array(int arrA[], int arrB[], int size) {
    int temp[size];  // 临时数组

    // 将数组 A 的内容复制到临时数组
    for (int i = 0; i < size; i++) {
        temp[i] = arrA[i];
    }

    // 将数组 B 的内容复制到数组 A
    for (int i = 0; i < size; i++) {
        arrA[i] = arrB[i];
    }

    // 将临时数组中的内容复制到数组 B
    for (int i = 0; i < size; i++) {
        arrB[i] = temp[i];
    }
}

void print_array(int arr[], int size) {
    printf("数组的内容为：");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arrA[] = { 1, 2, 3, 4, 5 };
    int arrB[] = { 6, 7, 8, 9, 10 };
    int size = sizeof(arrA) / sizeof(arrA[0]);

    // 输出交换前的数组内容
    printf("交换前：\n");
    printf("数组 A：");
    print_array(arrA, size);
    printf("数组 B：");
    print_array(arrB, size);

    // 调用交换函数
    swap_array(arrA, arrB, size);

    // 输出交换后的数组内容
    printf("交换后：\n");
    printf("数组 A：");
    print_array(arrA, size);
    printf("数组 B：");
    print_array(arrB, size);

    return 0;
}
#include <stdio.h>
int main  ()
{

}