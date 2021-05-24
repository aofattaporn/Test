#include<stdio.h> 
#include<stdlib.h>
#include<ctype.h>
int main() { 
    int x[10]={2,3,4,5,6,7,8}, i, j;
    for ( i = 10; i > 0; i--)
    {
        for (j = 0; j < 7; j++)
        {
            if (i > x[j])
            {
                printf("    ");
            }
            else { 

                printf("   *");
            }
        }
        printf("\n");
    }
    
}