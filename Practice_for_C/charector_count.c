#include<stdio.h>

int main() { 
    int c[27]={}, a[100], i, j, buff; 
    char s[100]="attaporn"; 

    // printf("Input sentence : ");
    // gets(s); 

    for ( i = 0; s[i] != '\0'; i++)
    {
       
        buff = s[i];
        buff = buff-96;

        c[buff]++; 
        a[i+1] = buff + 96;
        // printf("%d\n", buff);
    }

    for ( i = 1; i<26; i++)
    {
        // if (c[i] > 0)
        // {
        //     printf("%c : %d\n",a[i], c[i]);

        // }
        printf("%c\n", a[i]);
        
        
        
        
    }
    
    
}