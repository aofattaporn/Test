#include<stdio.h> 
int main() { 
    int i, j, matrix[10][10], n, sum1=0, sum2=0; 
    printf("Input dimension : "); 
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("matrix[%d][%d] = ", i, j); 
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n"); 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("%4d", matrix[i][j]); 
                sum1 += matrix[i][j];
                continue;
            }
            else { 
                printf("%4s", "");
            }
        }
        printf("\n"); 
    }
    printf("Sum of diagonal 1 = %d\n", sum1);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i+j == n + 1)
            {
                printf("%4d", matrix[i][j]);
                sum2 += matrix[i][j]; 
            }
            else { 
                printf("%4s", "");
            }
        }
        printf("\n"); 
    }
    printf("Sum of diagonal 2 = %d\n", sum2);

}