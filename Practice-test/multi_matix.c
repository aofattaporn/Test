#include<stdio.h> 
#include<math.h> 

int main() { 
    int i, j, k=1, a[10][10], b[20][10], c[10][10], n, m, p;
    float result; 
    printf("Input n,m : "); 
    scanf("%d, %d", &n, &m);
    printf("MATIX A\n");
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            printf("a[%d][%d] : ", i, j); 
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Input m,p : "); 
    scanf("%d, %d", &m, &p);
    printf("MATIX B\n");
    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= p; j++)
        {
            printf("a[%d][%d] : ", i, j); 
            scanf("%d", &b[i][j]);
        }
    }

    printf("MATIX C\n"); 
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= p; j++)
        {
            for ( k = 1; k <= n; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j<= p; j++)
        {
            printf("%6d", c[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}