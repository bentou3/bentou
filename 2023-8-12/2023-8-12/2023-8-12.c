#define  _CRT_SECURE_NO_WARNINGS 1
////����һ���������飬��ɶ�����Ĳ���
////
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//#include <stdio.h>
//void init (int* arr, int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void print(int* arr, int n)
//{
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        printf("%d", arr[i]);
//    }
//}void reverse(int* arr, int n)
//{
//    int start = 0;
//    int end = n-1;
//    int tmp = 0;
//    while(start < end)
//    {
//        tmp=arr[start];
//        arr[start] = arr[end];
//        arr[end] = tmp;
//        start++;
//        end--;
//    }
//
//}
//int main()
//{
//    int size = 5;
//    int arr[5];
//    // ��ʼ������
//    init(arr, size);
//
//    // ��ӡ����
//    print(arr, size);
//
//    // ��������
//    reverse(arr, size);
//
//    // ��ӡ���ú������
//    print(arr, size);
//
//    return 0;
//}
//ʵ��һ�������������ð������
//#include <stdio.h>
//void bubble(int *arr, int size) 
//{
//    for (int i = 0; i < size - 1; i++) 
//    {
//        for (int j = 0; j < size - i - 1; j++) 
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//void print(int *arr, int size) 
//{
//    printf("���������飺");
//    for (int i = 0; i < size; i++) 
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() 
//{
//    int arr[] = { 4, 2, 8, 5, 1 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    // ����ð��������
//    bubble(arr, size);
//    // ��ӡ����������
//    print(arr, size);
//
//    return 0;
//}
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include <stdio.h>
void swap_array(int *arr1, int *arr2, int size)
{
    int temp[] = { 0 };
    for (int i = 0; i < size; i++) 
    {
        temp[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) 
    {
        arr1[i] = arr2[i];
    }
    for (int i = 0; i < size; i++) 
    {
        arr2[i] = temp[i];
    }
}
void print_array(int *arr, int size) 
{
    printf("���������Ϊ��");

    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 6, 7, 8, 9, 10 };
    int size = sizeof(arr1) / sizeof(arr1[0]);
    // �������ǰ����������
    printf("����ǰ��\n");
    printf("���� 1��");
    print_array(arr1, size);
    printf("���� 2��");
    print_array(arr2, size);
    swap_array(arr1, arr2, size);
    // ������������������
    printf("������\n");
    printf("���� 1��");
    print_array(arr1, size);
    printf("���� 2��");
    print_array(arr2, size);
    return 0;
}

