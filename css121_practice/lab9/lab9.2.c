#include<stdio.h> 
#include"aof_func.h"

int main() { 
    int i;
    char s[100]; 
    printf("input sentence : "); 
    gets(s); 
    printf("\nsentence length = %d\n", length(s)); 
    upper(s);
    printf("\nchar to upper = %s\n", s); 
    lower(s);
    printf("\nchar to lower = %s\n", s); 
    
}