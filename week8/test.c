#include<stdio.h> 
int main() { 
    int num1, num2, product; 
    int *ptr_num1, *ptr_num2; 
    num1 = 5; 
    num2 = 7; 
    ptr_num1 = &num1; 
    ptr_num2 = &num2; 
    product = num1*(*ptr_num2); 
    printf("The address of num1 is %p\n", &num1); 
    printf("The value of ptr_num1 is %p\n", ptr_num1); 
    printf("The value of num1 is %p\n", ptr_num1); 

    printf("The value if num1 is %d\n", num1); 
    printf("The value of *ptr_num1 is %d\n", *ptr_num1); 
    
    printf("Thr value of product is %d\n", product); 


}