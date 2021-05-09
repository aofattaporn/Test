#include<stdio.h>
#include<math.h>
#include"gaof_func.h"
int main() { 
    int x=9, y=4; 
    float a,b; 
    a = 15.3694; 
    // a = round(a, 2);
    
    // เป็นการเรียกใช้ function จากไฟล์อื่น 
    printf("a   =%f\n", a); 
    printf("max =%d\n", maximum(x, y)); 
    printf("fac 5 =%d", fac(3));
}