#include<stdio.h> 
#include<math.h> 
double xround(float x, int n);
int main() { 
    float a, b; 
    a = 1.374; 
    b = 25.3445; 
    a = xround(a, 3); 
    b = xround(b, 0); 
    
    printf("a = %-5.5f\n", a); 
    printf("b = %-5.5f\n", b); 
}
double xround(float x, int n) { 
    return floor(x*pow(10, n)+0.5)/pow(10, n);
}