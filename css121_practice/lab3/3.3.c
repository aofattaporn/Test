#include<stdio.h> 

int main() { 
    int rows, column, matrix[10][10], i, j;
    float avg;
    printf("input order of matrix A m.n : ");
    scanf("%d %d", &rows, &column);
    printf("input element of matrix A\n"); 

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("a[%d][%d] = ", i, j); 
            scanf("%2d", &matrix[i][j]);
        }
    }
    printf("\n");
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= column; j++)
        {
            printf("%5d", matrix[i][j]);
            avg += matrix[i][j];
        }
        printf("\t Average of row %d = %6.2f\n", i, avg / column);
        avg = 0;
    }  
}