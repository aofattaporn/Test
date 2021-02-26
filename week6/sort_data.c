#include<stdio.h> 

int main() { 
    int a[100], buffer, i, j, n;
    // input data ไปเรื่อยๆ 
    for ( i = 1;; i++)
    {
        printf("input a[%d] = ", i);
        scanf("%d", &a[i]); 
        if(a[i] < 0) break; 
    }

    // sort data from input
    n = i - 1; // ลบตำแหน่งสุดท้ายไป
    for ( i = 1; i < n; i++)
    {
        //  เปรียบเทียบกับ data ที่ i + 1 
        for (j = i+ 1; j <= n; j++)
        {
            if (a[i] < a[j]) continue;
            else { 
                buffer = a[i]; 
                a[i] = a[j]; 
                a[j] = buffer;
            }
            
        }
        
    }

    // เรียง data ใหม่ ภายใน Arrays 
    for ( i = 1; i <= n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]); 
        
    }
    
    
    
}