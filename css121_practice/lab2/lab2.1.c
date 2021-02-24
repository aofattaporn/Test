#include<stdio.h> 

int main() { 
    int num, i, j;
    printf("End   :"); 
    scanf("%d", &num); 

    printf("  ");
    for (int i = 1; i <= num; i++)
    {
    
        printf("%4d", i);

    }
    printf("\n");
    for (i = 1;i <= num; i++)
    {
        printf(" %d", i);
        for (j = 1; j <= num; j++)
        {
            if (j <= i)
            {
                printf("%4d", i*j);
            }
            else { 
                printf("");
            }
        }
        printf("\n");
    }
}