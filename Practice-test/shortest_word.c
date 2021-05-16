#include<stdio.h> 
#include<string.h>
int main() { 
    char string[100], longest[20];
    int i, j=0, length, count = 0, min = 100, index=0, num=0, position=0;
    printf("Input sentence : "); 
    gets(string);
    length = strlen(string);
    for ( i = 0; i < length; i++)
    {
        if (string[i] != ' ')
        {
            count++;
        }
        // find a space tape
        else{
            // change count -> max
            if (count < min)
            {
                min = count;
                index = i - min;
                // position++;
            }
            count = 0;
            num++;   
        }      
    }
     /* Checking if last word is longest */
    if(count< min)
    {
        min = count;
        index = length-min;
    }
    /* Using length and index copying longest word */
    for(i=index;i<index+min;i++)
    {
        longest[j] = string[i];
        j++;
    }
    for ( i = 0; i < index; i++)
    {
        if(string[i]==' ')position++;
    }
    
    longest[j] = '\0';
    printf("There are %d word in sentence\n",num+1);
    printf("It is in position no.%d of the word  \n",position+1);
    printf("The shortest word consist of %d\n",min);
    printf("This word is programming %s \n", longest);
    

}