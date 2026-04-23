#include <stdio.h>

int main() {
    int i, j, n;
    int A[10][10], B[10][10], sum[10][10];

    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&B[i][j]);

    // Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Saddle Point
    printf("\nSaddle Point:\n");
    for(i=0;i<n;i++) {
        int min = A[i][0], col = 0;
        for(j=1;j<n;j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }
        int k, flag = 1;
        for(k=0;k<n;k++) {
            if(A[k][col] > min) {
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("Saddle Point = %d\n", min);
    }

    // Inverse (only for 2x2)
    if(n == 2) {
        int det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
        if(det != 0) {
            printf("\nInverse of Matrix A:\n");
            printf("%.2f %.2f\n", (float)A[1][1]/det, -(float)A[0][1]/det);
            printf("%.2f %.2f\n", -(float)A[1][0]/det, (float)A[0][0]/det);
        } else {
            printf("\nInverse not possible (det=0)\n");
        }
    }

    // Magic Square Check
    int sum_row, sum_col, d1=0, d2=0, magic=1;

    for(i=0;i<n;i++) {
        sum_row = sum_col = 0;
        for(j=0;j<n;j++) {
            sum_row += A[i][j];
            sum_col += A[j][i];
        }
        if(sum_row != sum_col)
            magic = 0;
    }

    for(i=0;i<n;i++) {
        d1 += A[i][i];
        d2 += A[i][n-i-1];
    }

    if(d1 != d2)
        magic = 0;

    if(magic)
        printf("\nMatrix is a Magic Square\n");
    else
        printf("\nMatrix is NOT a Magic Square\n");

    return 0;
}