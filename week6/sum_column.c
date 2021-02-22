#include<stdio.h> 
int main() { 
    // รับมิติของแต่ละเมทริก 
    int i, j, matrix[10][10], sum_col[10], rows, column; 
    printf("matrix :");
    scanf("%d, %d", &rows, &column); 

    // input element
    printf("input element of matrix A\n"); 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column;j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    // เก็บค่า sum_column 
    for ( i = 1; i <= column; i++)
    {
        sum_col[i] = 0;
        for ( j = 1; j <= rows; j++)
        {
            sum_col[i] += matrix[i][j];
        }
        
    }
    

    // พิมพ์ผลข้อมูลเมทริก 
    for ( i = 1; i <= rows; i++)
    {
        printf("\n");
        for (j = 1; j <= column; j++)
        {
            printf("%6d", matrix[j][i]); // ต้องเป็น matrix [j][i]
        }
        
    }
    printf("\n");

    // print ผลบวกของ column 
    for (i = 1; i <= 8*column; i++)
    {
        printf("=");
    }
    printf("\n");

    for ( i = 1; i <= column; i++)
    {
        printf("%6d", sum_col[i]);
    }
    printf("\n");

    for (i = 1; i <= 8*column; i++)
    {
        printf("=");
    }
   
    
    
    
    

}