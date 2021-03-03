#include<stdio.h> 
int main() { 
    int a[10], b[10], c[10] = {}, i, j, na, nb, num = 1, flag = 0; 
    // input set a 
    printf("input set a : \n"); 
    printf("-----------\n");
    for ( i = 1;; i++)
    {
        printf("a[%d] = ", i); 
        scanf("%d", &a[i]); 
        if (a[i]<0) break;
        na++;    
    }
    printf("\n");
    printf("input set b : \n"); 
    printf("-----------\n");
    for ( i = 1; ; i++)
    {
        printf("b[%d] = ", i); 
        scanf("%d", &b[i]);
        if (b[i]<0) break;
        nb++;   
    }
    na--;
    nb--;
    for ( i = 1; i <= na; i++)
    {
        flag = 0; 
        for ( j = 1;j <= nb; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1; 
            }
        } 
        if (flag == 0)
        {
            c[num] += a[i]; 
            num++;
        }
    }
    printf("-----------\n");
    printf("The difference of set a and b : ("); 
    for ( i = 1; i < num; i++)
    {
        printf("%d ", c[i]); 
        if (i < num - 1)
        {
            printf(", ");
        }
        else { 
            printf(")\n");
        }
    }
}