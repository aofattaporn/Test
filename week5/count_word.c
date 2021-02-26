#include<stdio.h> 
int main() { 
    int i, m = 1, n = 0;
    char word[100]; 
    printf("Input sentence :");
    gets(word); 
    for ( i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == ' ')
        {
            printf("\n char in word %2d = %2d", m, n); 
            m++; 
            n=0; 
            continue;
        }
        else if (word[i]=='.')
        {
            printf("\n char in word %2d = %2d", m, n); 
            break;
        }
        
        n++;
        
    }
    
}