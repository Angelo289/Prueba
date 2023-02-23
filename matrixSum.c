#include <stdio.h>
#include "prototype.h"
void matrixSum(const int m, const int n, int matrizA[m][n], int matrizB[m][n], int matrizC[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("Value of the sum at [%d][%d] is %d\n", i, j, matrizC[i][j]);
        }
    }
}