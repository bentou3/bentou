#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

// 计算平均值
double calculateMean(double data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// 计算标准差
double calculateStandardDeviation(double data[], int size) {
    double mean = calculateMean(data, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += pow(data[i] - mean, 2);
    }
    double variance = sum / size;
    return sqrt(variance);
}

int main() {
    double data[] = { 10.5, 8.2, 12.3, 9.7, 11.1 };
    int size = sizeof(data) / sizeof(data[0]);

    double mean = calculateMean(data, size);
    double standardDeviation = calculateStandardDeviation(data, size);

    printf("数据的平均值为: %.2f\n", mean);
    printf("数据的标准差为: %.2f\n", standardDeviation);

    return 0;
}
