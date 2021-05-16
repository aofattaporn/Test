#include<stdio.h> 
#include<string.h>
int main() { 
    char string[100], longest[20];
    int i, j=0, length, count = 0, max = 0, index=0, num=0, position=0;
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
            if (count > max)
            {
                max = count;
                index = i - max;
                // position++;
            }
            count = 0;
            num++;   
        }      
    }
     /* Checking if last word is longest */
    if(count>max)
    {
        max = count;
        index = length-max;
    }
    /* Using length and index copying longest word */
    for(i=index;i<index+max;i++)
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
    printf("The longest word consist of %d\n",max);
    printf("This word is programming %s \n", longest);
    

}