#include<stdio.h>
#include<math.h>
#define Line "==============================\n"
float sd(float x[100],int n); 

float sd(float x[100],int n) { 
    int i;
    float mean, sum=0;
    for ( i = 1; i <= n; i++)
    {
        sum += x[i];
    }
    mean = sum/n;
    sum = 0;
    for ( i = 1; i <= n; i++)
    {
        sum += pow((x[i]- mean), 2);
    }
    return sqrt(sum/n);
}

int main() { 
    int i, n;
    float x[100], ans; 
    for ( i = 1;; i++)
    {
        printf("input score %d : ", i); 
        scanf("%f", &x[i]); 
        if(x[i]<0)break;
    }
    n = i - 1; 
    ans = sd(x, n); 
    printf(Line);
    printf("value of Sd   = %f\n", ans); 
    printf(Line);
}
