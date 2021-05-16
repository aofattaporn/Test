#include<stdio.h> 
#include<stdlib.h>
#include<math.h> 
void swarp(int a[10][10],int n ,int r1,int r2) { 
    int i, j,  buff; 
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {   
            
            if (a[i][j] == a[r1][j] )
            {
                buff = a[i][j]; 
                a[i][j] = a[r2][j];
                a[r2][j] = buff;
            }   
   
        }
        
    }
    
}
int main(){ 
    int a[10][10], n, i, j, buff, r1, r2; 
    system("clear");
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
    
    printf("\n\nInput row for swap (r1, r2) : "); 
    scanf("%d,%d", &r1, &r2); 
    swarp(a, n, r1, r2); 

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            printf("%d   ", a[i][j]); 
        }
        printf("\n");
    }
}