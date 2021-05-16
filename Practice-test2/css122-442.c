#include<stdio.h> 
#include<string.h> 

int main() { 
    char s[100], word[10]={};
    int i, j, nword=0, sword1=0, sword2=0, buff=0; 
    printf("Input sentence : "); 
    gets(s); 
    for (i = 0; s[i]!='\0'; i++)
    {
        ++sword2;
        if (s[i]==' ')
        {
            ++nword;
            --sword2;
            buff = sword2;
            if (sword2<sword1)
            {
                sword2 = sword1;
            }
            sword1 = buff;
            sword2 = 0;
        }
        else if (s[i]=='.')
        {
            ++nword;
            --sword2;
            if (sword2<sword1)
            {
                sword2 = sword1;
                break;
            }    
        }
      
    }
    for(i = 0 ; i <= sword2; i++)
        {
            for ( j = 0; s[j] != '\0'; i++)
            {
                word[j] += s[j];
                if (s[j] == ' '){
                    i=0;
                    break;
                }
            }
            
        }
    
    printf("There are %d word in sentence\n", nword);
    printf("The longest word consists of %d charecters\n", sword2);

    for ( i = 0; i <= strlen(word); i++)
    {
        printf("%c\n", word[i]);
    }
}