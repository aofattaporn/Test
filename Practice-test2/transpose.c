#include<stdio.h> 
#include<stdlib.h>
#include<math.h> 
void transpose(int a[10][10],int n) { 
    int i, j, b[10][10]; 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            a[i][j] = b[j][i];
        }
    }
}

int main(){ 
    
    int a[10][10], b[10][10]={},  n, i, j, buff, r1, r2; 
    // system("clear");
    printf("Input n : "); 
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("a[%d][%d] :", i, j); 
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d   ", a[i][j]); 
        }
        printf("\n");
    }
    transpose(a, n);
    printf("\n\n");
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d   ", a[i][j]); 
        }
        printf("\n");
    }

}