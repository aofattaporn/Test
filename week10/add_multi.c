#include<stdio.h> 
void add_multi(int a, int b, int *ptr_sum, int *ptr_product); 
int main() { 
    int x, y, sum, product; 
    x = 3; 
    y = 5; 
    add_multi(x, y, &sum, &product); 
    printf("sum = %d\n", sum); 
    printf("product = %d", product);

}
void add_multi(int a, int b, int *ptr_sum, int *ptr_product){ 
    // return หลายค่าโดยการเปลี่ยนค่า pointer 
    *ptr_sum = a + b; 
    *ptr_product = a * b; 

}