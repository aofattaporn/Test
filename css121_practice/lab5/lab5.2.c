#include<stdio.h> 
int main() { 
    int d, m, y;
    char month[13][4] = {" ", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Input d/m/y : "); 
    scanf("%d/%d/%d", &d,&m,&y);
    printf("Output date : %d %s %d\n", d, month[m], y); 
}