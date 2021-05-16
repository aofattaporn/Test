#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int main() { 
    char string[100]; 
    int i, j, buff, n, count=0, num, index = 0;
    printf("Input sentence : "); 
    scanf("%s", string);
    fflush(stdin);
    printf("Input charecter : "); 
    scanf("%d", &num);
    int lstring = strlen(string);
    for ( i = 0; i < lstring; i++)
    {
        if (string[i] != ' ')
        {
            count++; 
        }
        else { 
            if (count==num)
            {
                index = i - num;
            }
            count = 0;

        }
        
    }
    
    for ( i = index; i < lstring; i++)
    {
        printf("%c", string[i]); 
    }
    
    

}