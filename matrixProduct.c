#include <stdio.h>
#include "prototype.h"
void matrixProduct(const int m, const int n, int matrixA[m][n], const int p, const int q, int matrixB[p][q], const int r, const int s, int matrixC[r][s])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            matrixC[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
            printf("Entry at [%d][%d] is: %d\n", i, j, matrixC[i][j]);
        }
    }
}