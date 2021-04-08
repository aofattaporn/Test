#include<stdio.h> 
#include<math.h> 
double sum(int n); 
int main() { 
    int n, i; 
    double s; 
    printf("Input n : "); 
    scanf("%d", &n);
    s = sum(n);
    printf("sum = %.0f\n", s);
}
double sum(int n) {
    if(n==0)return 0; 
    else return pow(n, 3)+sum(n-1);
    // if (n==1)return 1; 
    // else return n*n*n + sum(n - 1);
}   
