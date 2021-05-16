#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 
int main() { 
    int num, i, j, k, n; 
    printf("Input numbe : "); 
    scanf("%d", &num);
    for ( i = 1; i <= num*2+3; i++)
    {
        printf("*");
    }
    printf("\n");
    for ( i = 1; i <= num ; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf(" "); 
        }
        printf("*");
        for ( k = 1; k <= num-i+1; k++)
        {
            printf("%d", k);
        }
        for ( k = num-i; k >= 1; k--)
        {
            printf("%d", k);
        }
        printf("*\n");
    }

    for ( i = num; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++) 
        {
            printf(" ");
        }
        printf("*"); 
        for ( k = 1; k <= num-i+1; k++)
        {
            printf("%d", k);
        }

        for ( k = num-i; k >=1; k--)
        {
            printf("%d", k);
        }
        printf("*\n"); 
        
        
    }
    
    
    
}