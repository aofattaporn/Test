// เขียน function คล้าย user define function 
#include<math.h>
int maximum(int a, int b){ 
    int max; 
    (a>b)?max=a:max+b;
    return max;
}

// float round(float x, int n){ 
//     return floor(x*pow(10, n)+0.5)/pow(10, n); 
// }
int fac(int x) { 

    if (x==0)return 1; 
    else return (x*fac(x-1));
    
}


int sd(float x[100],float n) { 
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
        sum = x[i]- mean;
    }
    return sqrt(pow(sum, 2)/n); 

}