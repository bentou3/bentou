#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//    int year, month, day;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2: {
//            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//                printf("29\n");
//            else
//                printf("28\n");
//        }
//        }
//    }
//    return 0;
//}
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
// 比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。
//#include <stdio.h>
//int main()
//{
//    for (int n = 10000; n <= 99999; n++)
//    {
//        if (((n / 10) * (n % 10) + (n / 100) * (n % 100) + (n / 1000) * (n % 1000) + (n / 10000) * (n % 10000)) == n)
//            printf("%d ", n);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    unsigned long pulArray[] = { 6,7,8,9,10 };
//    unsigned long* pulPtr;
//    pulPtr = pulArray;
//    *(pulPtr + 3) += 3;
//    printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//   
//    return 0;
//}
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。
//#include <stdio.h>
//void ben(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	ben(arr, n);
//	return 0;
//}
//////写一个函数，可以逆序一个字符串的内容。
