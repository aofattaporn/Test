#include<stdio.h> 
#include<string.h>

int main() { 
    char string[100]="C is a computer programming langeus." , word[30]; 
    int i, j=0, lstring, lword, nword=0, count, position=0, max=0, index;
    lstring = strlen(string);
    lword = strlen(word); 
    for ( i = 0; i < lstring; i++)
    {
        if (string[i] != ' ')
        {
            count++; 
        }
        else { 
            nword++; 
            if (count > max )
            {
                max = count;
                // find start longest word
                index = i - max; 
                
            }
            count = 0;       
        }
    } 
    // Last word 
    if (count > max)
    {
        count--;
        max = count;
        index = (lstring-1) - max;
    }
    

    for ( i = index ; i < index + max; i++)
    {
        word[j] = string[i]; 
        j++; 
    }
    for ( i = 0; i < index; i++)
    {
        if(string[i]==' ') position++; 
    }
    word[j] = '\0';

    printf("count word : %d\n", nword+1);
    printf("position : %d\n", position+1);
    printf("charecter : %d\n", max);
    // printf("%d\n", index);
    printf("word is : %s\n", word);



}