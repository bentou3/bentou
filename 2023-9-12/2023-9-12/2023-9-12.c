#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 3
#define MAX_MATRICES 5

void readMatrices(int matrices[][SIZE][SIZE], int num_matrices) {
    for (int k = 0; k < num_matrices; k++) {
        printf("请输入第 %d 个三阶矩阵的元素：\n", k + 1);
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                scanf("%d", &matrices[k][i][j]);
            }
        }
    }
}

void printMatrices(int matrices[][SIZE][SIZE], int num_matrices) {
    for (int k = 0; k < num_matrices; k++) {
        printf("第 %d 个三阶矩阵为：\n", k + 1);
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                printf("%d ", matrices[k][i][j]);
            }
            printf("\n");
        }
    }
}

int calculateDeterminant(int matrix[SIZE][SIZE]) {
    int determinant = 0;

    // 通过按行展开计算行列式的值
    determinant =
        matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

    return determinant;
}

void calculateDeterminants(int matrices[][SIZE][SIZE], int determinants[], int num_matrices) {
    for (int k = 0; k < num_matrices; k++) {
        determinants[k] = calculateDeterminant(matrices[k]);
    }
}

int main() {
    int matrices[MAX_MATRICES][SIZE][SIZE];
    int determinants[MAX_MATRICES];
    int num_matrices;

    printf("请输入要计算行列式的矩阵个数（最多%d个）：", MAX_MATRICES);
    scanf("%d", &num_matrices);

    readMatrices(matrices, num_matrices);
    printMatrices(matrices, num_matrices);

    calculateDeterminants(matrices, determinants, num_matrices);

    printf("计算结果如下：\n");
    for (int k = 0; k < num_matrices; k++) {
        printf("第 %d 个三阶矩阵的行列式为：%d\n", k + 1, determinants[k]);
    }

    return 0;
}
