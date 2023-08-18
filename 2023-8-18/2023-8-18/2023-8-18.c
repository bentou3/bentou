#define  _CRT_SECURE_NO_WARNINGS 1#include <stdio.h>

void swap_array(int arrA[], int arrB[], int size) {
    int temp[size];  // ��ʱ����

    // ������ A �����ݸ��Ƶ���ʱ����
    for (int i = 0; i < size; i++) {
        temp[i] = arrA[i];
    }

    // ������ B �����ݸ��Ƶ����� A
    for (int i = 0; i < size; i++) {
        arrA[i] = arrB[i];
    }

    // ����ʱ�����е����ݸ��Ƶ����� B
    for (int i = 0; i < size; i++) {
        arrB[i] = temp[i];
    }
}

void print_array(int arr[], int size) {
    printf("���������Ϊ��");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arrA[] = { 1, 2, 3, 4, 5 };
    int arrB[] = { 6, 7, 8, 9, 10 };
    int size = sizeof(arrA) / sizeof(arrA[0]);

    // �������ǰ����������
    printf("����ǰ��\n");
    printf("���� A��");
    print_array(arrA, size);
    printf("���� B��");
    print_array(arrB, size);

    // ���ý�������
    swap_array(arrA, arrB, size);

    // ������������������
    printf("������\n");
    printf("���� A��");
    print_array(arrA, size);
    printf("���� B��");
    print_array(arrB, size);

    return 0;
}
#include <stdio.h>
int main  ()
{

}