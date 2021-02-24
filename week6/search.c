#include<stdio.h> 
int main() { 
    char word[40]; 
    int i, n=0; 
    printf("input sentence :"); 
    gets(word);
    
    for ( i = 0; word[i] != '0'; i++)
    {
        if (word[i] == 'T' || word[i] == 't')
        {
            if (word[i+1]=='h')
            {
                if (word[i+2]=='e')
                {
                    if (word[i+3]==' ')
                    {
                        n++;
                    }
                    
                }
            }
            
        }
        
    }

    printf("Number of word 'The = %d\n", n);
    
}