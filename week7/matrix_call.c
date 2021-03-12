#include<stdio.h> 
int main() { 
    int a[10][10]={0}, i, j, k, m, n; 
    printf("orider of n = "); 
    scanf("%d", &n); 

    for ( i = 1; i <= n ; i++)
    {
        m = n; 
        for ( j = 1; j <= n-i+1; j++)
        {
            a[i][j] = n-j-i+2;    
        }
        for ( k = j; k <= n; k++)
        {
            a[i][k] = m--;
        }
        
        
    }
    
    printf("matrix A\n"); 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    

}