#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

// ����ƽ��ֵ
double calculateMean(double data[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// �����׼��
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

    printf("���ݵ�ƽ��ֵΪ: %.2f\n", mean);
    printf("���ݵı�׼��Ϊ: %.2f\n", standardDeviation);

    return 0;
}
