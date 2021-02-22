#include<stdio.h> 

int main() { 
    int a[100], b, i, j, n; 
    // input data ไปเรื่อยๆ 
    for ( i = 1;; i++)
    {
        printf("input a[%d] = ", i);
        scanf("%d", &a[i]); 
        if(a[i] < 0) break; 
    }
    n = i - 1; // ลบตำแหน่งสุดท้ายไป
    for ( i = 1; i < n; i++)
    {
        for (j = i+ 1; j <= n; j++)
        {
            if (a[i] < a[j]) continue;
            else { 
                b = a[i]; 
                a[i] = a[j]; 
                a[j] = b;
            }
            
        }
        
    }

    for ( i = 1; i <= n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]); 
        
    }
    
    
    
}