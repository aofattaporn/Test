#include<stdio.h> 
#include<math.h> 
#include<string.h> 
int main() { 
    char string[100], longest[20];
    int i, j=0, length, count = 0, min = 0, index=0, num=0, position=0;
    printf("Input sentence : "); 
    gets(string);
    length = strlen(string);
    for ( i = 0; i < length; i++)
    {
        if (string[i] != ' ')
        {
            count++; 
        }
        else { 
            if(count>min){ 
                min = count; 
                index = i - min; 
            }
            
        }
        
    }
    
}