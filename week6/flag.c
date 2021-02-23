#include<stdio.h> 
#include<stdlib.h>
int main() { 
    int a[100], i, b, flag, n; 
    for (i = 1;; i++)
    {
        printf("a[%d] = ", i); 
        scanf("%d", &a[i]); 
        if(a[i]<0)break;
    }
    n = i -1; 
    printf("====================\n"); 
    printf("select no. = "); 
    scanf("%d", &b);
    printf("====================\n"); 
    flag = 0; 
    for ( i = 1; i <= n; i++)
    {
        if (a[i] == b)
        {
            flag = i;
            break;
        }

        
    }
    if (flag == 0)
        {
            printf("This number is not in the Array"); 
        }
        else  { 
            printf("This number is in the  Array position # %d\n", flag);
        }
        
    

    
}