#include<stdio.h> 
int main() { 
    int a[100], *pa, i, n, n_odd, n_even, sum_odd = 0, sum_even = 0; 
    pa = &a[i];
    for ( i = 1;; i++)
    {
        printf("input arrays a[%d]: ", i); 
        scanf("%d", pa); 
        if (i % 2 == 0)sum_even += *pa;
        else sum_odd += *pa;
        
        if (*pa<0)break;
        pa++;
    }
    n = i -1;
    printf("\nn = %d", n); 
    if (n%2==0)
    {
        printf("\nsum of elements = %d\n", sum_even);
    }
    else { 
        printf("\nsum of elements = %d\n", sum_odd);
    }
}