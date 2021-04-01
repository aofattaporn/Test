#include<stdio.h> 
#include<math.h> 

int main() { 
    float x, s_cos,f_cos, a = 0, t; 
    int n=0; 
        printf("input x: "); 
        scanf("%f", &x); 
        t = 1; 
        printf("%-10s%-10s%-10s\n", "term", "value", "sum");
        printf("====================================\n"); 
        while (fabs(t) > 0.00001)
        {
            s_cos = s_cos + t; 
            n++; 
            printf("%-8d %10.6f %10.6f\n", n, t, s_cos);
            t = (-1) * t * pow(x, 2)/(a+1)/(a+2); 
            a = a + 2; 
        } 
        f_cos =cos(x);
        printf("====================================\n"); 
        printf("sin(x) from compute  = %f\n", s_cos); 
        printf("sin(x) from function = %f\n", f_cos);
        printf("number of term = %d\n", n); 

}