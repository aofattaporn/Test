#include<stdio.h>
#include<math.h>
#define PI 3.14159265
#define NEWLINE "\n"
int main() { 
    float r, area; 
    printf("input radius : "); 
    scanf("%f", &r); 
    area = PI*pow(r, 2); 
    printf(NEWLINE); 
    printf("area of circle = %f", area);
    
}