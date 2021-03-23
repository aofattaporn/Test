#include<stdio.h> 
int main() { 
    int x1 = 100; 
    int x2 = 200; 
    int *x1ptr; 
    int *x2ptr; 
        // printf("dsfsdfsd%d", &*x1ptr);
        x1ptr = &x1; 

        x2ptr = &x2; 
        *x2ptr = 50; 
        printf("*x2ptr = %d", *x2ptr);
} 