#include<stdio.h> 
int main() { 
    int a, b, i, buffer = 0;
    printf("input number : "); 
    scanf("%d, %d", &a, &b); 
    for (i = 0; i <= 10; i++)
    {
        printf("%d ", a); 
        buffer = a + b;
        a = b ; 
        b = buffer;
    }
    
}