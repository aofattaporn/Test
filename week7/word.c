#include<stdio.h> 
int main() { 
    int i, j, n; 
    char word[20]; 
    printf("Inpur sentence :");
    gets(word); 
    for ( i = 0; word[i] != '\0'; i++)
    {
        if ( word[i] == ' ')
        {
            printf("\n"); 
            n++;
        }
        else { 
            if (word[i]>= 97 && word[i] <= 122 )
            {
                word[i] = word[i] - 32; 
                printf("%c", word[i]);
            }
            else{ 
                printf("%c", word[i]);
            }
            
        }
        
    }

    printf("\ntotal = %d words", n+1);
    

}