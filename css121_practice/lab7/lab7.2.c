#include<stdio.h> 
#include<math.h> 
float func(float x);

int main() { 
    float f_sum, a, b, n, h, area;
    int i, j=1; 
    printf("a, b : ");
    scanf("%f,%f", &a,&b);
    printf("n : ");
    scanf("%f", &n);
    h = (b - a) / n; 
    area = (func(a) + func(b)) / 2; 
    for ( i = 0; i < n-1; i++)
    {
        f_sum = func(a+h*j);
        area = area + f_sum;
        j++;
    }
    area = area * h;
    printf("area %.6f\n", area); 
} 
float func(float x) { 
    return sqrt(pow(x, 2)+2);
}
