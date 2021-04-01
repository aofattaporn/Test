#include<stdio.h> 
#include<math.h> 
#include<stdlib.h> 
int main() { 
    float x, s_sin, f_sin, a = 1, t;
    int n=0; 
        printf("input x: "); 
        scanf("%f", &x); 
        t = x/a; 
        printf("%-10s%-10s%-10s\n", "term", "value", "sum");
        printf("====================================\n"); 
        while (fabs(t) > 0.00001)
        {
            s_sin = s_sin + t; 
            n++; 
            printf("%-8d %10.6f %10.6f\n", n, t, s_sin);
            t = (-1) * t * pow(x, 2) /(a+1)/(a+2); 
            a = a + 2; 
        } 
        f_sin = sin(x);
        printf("====================================\n"); 
        printf("sin(x) from compute  = %f\n", s_sin); 
        printf("sin(x) from function = %f\n", f_sin);
        printf("number of term = %d\n", n+1); 

             

        
        
        
}