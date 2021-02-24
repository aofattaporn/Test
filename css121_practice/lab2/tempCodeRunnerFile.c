#include<stdio.h> 
int main() { 
    int input, i, j, Odd_num, Even_num ;
    Odd_num = 0;
    Even_num = 0;
    int num[100];

    printf("input Array a :\n"); 
    printf("-------------\n");
    for(i = 1;; i++){
        printf("a[%d] = ", i);
        scanf("%d", &num[i]);
        if (num[i] < 0) break;
    }
    printf("Odd number  :");
    for (j = 0; j < i; j++)
    {
        if (num[j]%2 != 0)
        {
            printf("%3d", num[j]);
            Odd_num++;
        }   
    }
    printf("\nTotal = %d numbers", Odd_num);

    printf("\nEven number :");
    for (j = 1; j < i; j++)
    {
        if (num[j]%2 == 0)
        {
            printf("%3d", num[j]);
            Even_num++;
        }   
    }
    printf("\nTotal = %d numbers", Even_num);
    printf("\n");
}