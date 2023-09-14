#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 4

int calculateDeterminant(int matrix[SIZE][SIZE]) {
    int determinant = 0;
    int submatrix[SIZE - 1][SIZE - 1];

    // 递归地计算 2 阶、3 阶子行列式的值
    if (SIZE == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    else if (SIZE == 3) {
        return
            matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
            matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
            matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
    }

    // 展开 4 阶行列式
    for (int i = 0; i < SIZE; i++) {
        // 第一行按列展开，每次取出第一行第 i 列的元素
        int subrow = 0, subcol = 0;
        for (int row = 1; row < SIZE; row++) {
            for (int col = 0; col < SIZE; col++) {
                if (col != i) {
                    submatrix[subrow][subcol] = matrix[row][col];
                    subcol++;
                    if (subcol == SIZE - 1) {
                        subrow++;
                        subcol = 0;
                    }
                }
            }
        }

        determinant += matrix[0][i] * calculateDeterminant(submatrix) * ((i % 2 == 0) ? 1 : -1);
    }

    return determinant;
}

int main() {
    int matrix[SIZE][SIZE];

    printf("请输入一个 %d 阶矩阵的元素：\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = calculateDeterminant(matrix);

    printf("该矩阵的行列式为：%d\n", determinant);

    return 0;
}
