#include<stdio.h>
int big(int x[100], int n);
int main(){
    int a[5] = {8, 7, 3, 9, 2}; 
    int b[10] = {5, 9, 2, 6, 7, 1, 2, 8, 4, 10}; 
    printf("Big a = %d\n", big(a, 5)); 
    printf("Big b = %d\n", big(b, 10)); 

    
}
int big(int x[100], int n) { 
    int max, i; 
    max = x[0]; 
    for ( i = 0; i < n; i++)
    {
        if (x[i]>max)max = x[i]; 
        
        
    }
    return max;
    
}
