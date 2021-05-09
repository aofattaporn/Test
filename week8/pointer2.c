#include<stdio.h> 
int main() { 
    char name[80], *pc; 
    int i, n; 
    printf("input name-surname :"); 
    gets(name); 
    pc = &name[0]; 
    for ( i = 0; *pc!='\0'; i++)
    {
        if (*pc==' ')
        {
           n = i; 
           break;
        }
        pc++;
        
    }
    pc = &name[n+1]; 
    for (i=0;*pc != '\0';i++)
    {
        printf("%c", *pc);
        pc++; 
    }
    printf(" ");
    pc = &name[0]; 
    for ( i = 1; i <=n; i++)
    {
        printf("%c", *pc); 
        pc++;
    }
    printf("\n"); 
    
    
    
}