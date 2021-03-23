#include<stdio.h> 
int main() { 
    int a[100], *pa, i, n, flag=0; 
    pa = &a[i]; 
    for ( i = 1;; i++)
    {
        printf("input data %d: ", i); 
        scanf("%d", pa); 
        if (*pa<0)break;
        pa++;
    }
    // reset data 
    n = i - 1;  
    pa = &a[i]; 

    for ( i = 1; i < n; i++)
    {
        if (*pa > *(pa+1)) 
        {
            flag = 1;
            break;
        }
        pa++;
        
    }
    if (flag==0)printf("\narrays is sequence");
    else printf("\narray is not sequence\n");

} 