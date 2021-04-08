#include<stdio.h> 
int a[10][10], b[10][10], c[][10]={},  m, n, p, i, j, k=1; 
void mat_multi(int a[10][10], int b[10][10], int c[10][10]);
int main() { 
    printf("input order of matrix A m,n = "); 
    scanf("%d,%d", &m,&n); 
    printf("input element of matrix A\n");
    for ( i = 1; i <=m; i++)
    {
        for ( j = 1; j<=n; j++)
        {
            printf("a[%d][%d] : ", i, j); 
            scanf("%d", &a[i][j]); 
        }
    }
    printf("\ninput order of matrix B n,p = "); 
    scanf("%d,%d", &n,&p);
    printf("input element of matrix B\n"); 
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=p; j++)
        {
            printf("b[%d][%d] : ", i, j); 
            scanf("%d", &b[i][j]); 
        }
    }
    printf("Output matrix C\n\n"); 
    mat_multi(a, b, c); 
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= p; j++)
        {
            printf("%6d", c[i][j]);
        }
        printf("\n");
        
    }
      
    
}
void mat_multi(int a[10][10], int b[10][10], int c[10][10]){ 
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= p; j++)
        {
            for ( k = 1;k<=n; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
               
            }
        }
    }
}
