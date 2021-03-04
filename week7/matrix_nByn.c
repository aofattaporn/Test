#include<stdio.h> 
int main() { 
    int i, j, n, matrix[10][10];
    printf("Input n :"); 
    scanf("%d", &n); 

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("matrix[%d][%d] = ",i ,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n"); 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i+j == n+1)
            {
                printf("%6d", matrix[i][j]);
            }
            else { 
                printf("      ");
            }
            
            
        } 
        printf("\n"); 
    }
    
    


}