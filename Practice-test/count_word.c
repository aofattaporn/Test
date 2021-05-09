#include<stdio.h>
#include<string.h> 
#include<ctype.h>
int main() { 
    char string[100]; 
    int i, count=0, length; 

    printf("Input sentence : "); 
    gets(string); 
    length = strlen(string); 
    for ( i = 0; i < length ; i++)
    {
        printf("%c", toupper(string[i]));
        if (string[i] == ' '||string[i] == '.' )
        {
            printf("\n"); 
            count++;
        }
        

    }
    printf("Total = %d word\n", count); 
     


}