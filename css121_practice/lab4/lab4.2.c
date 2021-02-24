#include<stdio.h> 
int main() { 
    int n, matrix[10][10], i, j, sum1 = 0, sum2 = 0; 
    printf("Input element of matrix A n : ");
    scanf("%d", &n);

    printf("\n"); 
    printf("Input element of matrix A\n"); 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]); 
        }
    }
    printf("\n"); 
    for ( i = 1; i <= n ; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%6d", matrix[i][j]);
            if (i == j )
            {
                sum1 += matrix[i][j];
            }
            if (i+j == n + 1)
            {
                sum2 += matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("Sun of diagonal 1 = %d\n", sum1);
    printf("Sun of diagonal 2 = %d\n", sum2);
}


   