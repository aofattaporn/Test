#include<stdio.h> 
int main() { 
    int a, b, i, buffer = 0;
    printf("input number : "); 
    scanf("%d, %d", &a, &b); 
    for (i = 0; buffer < 10; i++)
    {
        printf("%d ", a); 
        buffer = a + b; // เก็บ buffer ผลบวก 
        a = b ;  // ให้ค่า a เก็บเป็นค่าตัวไป 
        b = buffer; // ให้ผลบวกเป็น buffer เก็บในตัวแปร b 
    } 
        printf("\nSum of fibonacci : %d\n", buffer);
    
}