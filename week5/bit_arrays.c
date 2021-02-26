#include<stdio.h> 
int main() { 
    int matrix[10][10], i, j, n;
    printf("Input dimention matrix :"); 
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("%6d", 0);
            }
            else if (i < j)
            {
                printf("%6d", 1);
            }
            else if (i > j)
            {
                printf("%6d", -1);
            }
        
        }
        printf("\n");
        
    }
    
}