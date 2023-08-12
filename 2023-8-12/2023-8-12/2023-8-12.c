#define  _CRT_SECURE_NO_WARNINGS 1
////创建一个整形数组，完成对数组的操作
////
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
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
//    // 初始化数组
//    init(arr, size);
//
//    // 打印数组
//    print(arr, size);
//
//    // 逆置数组
//    reverse(arr, size);
//
//    // 打印逆置后的数组
//    print(arr, size);
//
//    return 0;
//}
//实现一个对整形数组的冒泡排序
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
//    printf("排序后的数组：");
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
//    // 调用冒泡排序函数
//    bubble(arr, size);
//    // 打印排序后的数组
//    print(arr, size);
//
//    return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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
    printf("数组的内容为：");

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
    // 输出交换前的数组内容
    printf("交换前：\n");
    printf("数组 1：");
    print_array(arr1, size);
    printf("数组 2：");
    print_array(arr2, size);
    swap_array(arr1, arr2, size);
    // 输出交换后的数组内容
    printf("交换后：\n");
    printf("数组 1：");
    print_array(arr1, size);
    printf("数组 2：");
    print_array(arr2, size);
    return 0;
}

