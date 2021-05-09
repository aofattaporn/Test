#include<stdio.h> 
#include<string.h> 
#include<ctype.h>

int main() { 
    int i, j, flag, n; 
    char string[100]="The Dog is on the table.", word[10]="The"; 
    // printf("input data :"); 
    // printf("sentence :"); 
    int lstring = strlen(string); 
    int lword = strlen(word); 

    
    for ( i = 0; i < lstring; i++)
    {
        // Find start word 
        if (string[i]==word[0] && string[i+lword]==' ')
        {
            n = i;
            for ( j = 0; j < lword; j++)
            {
                if (string[i]==word[j])
                {
                    flag = 1;
                    i++;
                }
                else { 
                    flag = 0;
                }
            }
            i = n;
        }
        // Checking search last word  
        if (string[i]==word[0]&& string[i+lword]=='.')
        {
            n = i;
            for ( j = 0; j < lword; j++)
            {
                if (string[i]==word[j])
                {
                    flag = 1;
                    i++;
                }
                else { 
                    flag = 0;
                }
            }
            i = n;
        }
        
    }

    if (flag == 1 )
    {
        printf("\nTrue \n"); 
    }
    else{ 
        printf("\nFalse\n");
    }

    
    
}