#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
int main() {
    float x0, x1, f, df; 
    int i; 
    printf("x0 :");
    scanf("%f", &x0);
    printf("    x0      |    x1      |    f(x)\n"); 
    for(i=0;;i++) { 
        f = 3*x0 + sin(x0) - exp(x0); 
        df = 3 + cos(x0) - exp(x0);
        x1 = x0 - f/df;
        if (fabs(x1-x0) < 0.00001)break;
        printf("%12.6f|%12.6f|%12.6f\n", x0, x1, f); 
        x0 = x1; }
        printf("\n============================\n"); 
        printf("The solution x1 = %f\n", x1); 

    
}
