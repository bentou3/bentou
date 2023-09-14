#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define SIZE 4

int calculateDeterminant(int matrix[SIZE][SIZE]) {
    int determinant = 0;
    int submatrix[SIZE - 1][SIZE - 1];

    // �ݹ�ؼ��� 2 �ס�3 ��������ʽ��ֵ
    if (SIZE == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    else if (SIZE == 3) {
        return
            matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
            matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
            matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);
    }

    // չ�� 4 ������ʽ
    for (int i = 0; i < SIZE; i++) {
        // ��һ�а���չ����ÿ��ȡ����һ�е� i �е�Ԫ��
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

    printf("������һ�� %d �׾����Ԫ�أ�\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int determinant = calculateDeterminant(matrix);

    printf("�þ��������ʽΪ��%d\n", determinant);

    return 0;
}
