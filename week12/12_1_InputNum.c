#include<stdio.h> 
int main() { 
    int i; 
    FILE *mathfile; 
    mathfile = fopen("test1.txt", "wt"); 
    for ( i = 1;i<=20; i++)
    {
        fprintf(mathfile, "%d\n", i);

    }
    fclose(mathfile); 
    
}