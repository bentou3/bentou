#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 3

void readMatrix(int matrix[][SIZE]) {
    printf("请输入三阶矩阵的元素：\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][SIZE]) {
    printf("三阶矩8阵为：\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int calculateDeterminant(int matrix[][SIZE]) {
    int determinant = 0;

    // 通过按行展开计算行列式的值
    determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

    return determinant;
}

int main() {
    int matrix[SIZE][SIZE];
    int determinant;

    readMatrix(matrix);
    printMatrix(matrix);

    determinant = calculateDeterminant(matrix);
    printf("三阶矩阵的行列式为：%d\n", determinant);

    return 0;
}
