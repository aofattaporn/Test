#include<stdio.h> 
#include<math.h> 
double pow_num(float x, float n);
int main() { 
    float x, n;
    printf("Input x,n : "); 
    scanf("%f,%f", &x, &n);
    printf("The solution S1 (recursive) = %.2f\n", pow_num(x, n));
    printf("The solution S2 (function pow(x,n)) = %.2f\n", pow(x, n));
}
double pow_num(float x, float n) {
    if(n == 1) return x;
    else return(x * pow_num(x, n-1));
}