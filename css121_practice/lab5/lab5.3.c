#include<stdio.h> 
int main() { 
    int i, j, x[10], num, flag, min;
    printf("input number :\n"); 
    printf("-------------\n"); 
    for ( i = 1;; i++)
    {
        printf("x[%d] = ", i); 
        scanf("%d", &x[i]);
        if(x[i] == -1) break;
        num++;
    }
    num = num - 1;
    min = x[1];
    for ( i = 2; i <= num ; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }
    for(i = min; i >=1; i--) { 
        flag = 0;
        for ( j = 1; j <= num; j++)
        {
            if(x[j] % i != 0) { 
            flag = 1;
        }
        }
        if (flag == 0)
        {
            printf("The GCD : %d\n", i);
            break;
        }
    }
}
    
    
