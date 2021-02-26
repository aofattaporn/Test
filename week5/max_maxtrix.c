#include<stdio.h> 
int main() { 
    int rows, column, matrix[10][10], i, j, max; 
    printf("Inputdimention : "); 
    scanf("%d, %d", &rows, &column); 
    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= column; j++)
        {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for ( i = 1; i <= rows; i++)
    {
        printf("\n"); 
        for ( j = 1; j <= column; j++)
        {
            printf("%6d", matrix[i][j]);
        }
    }
    
    printf("\n");
    for ( i = 1; i <= rows; i++)
    {
        max = 0;
        for ( j = 1; j <= column; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
                
            }
        }
        printf("ค่าที่มากที่สุดในแถว %d : %d\n", i, max);
    }
    
    
    

}