#include<stdio.h> 
int main() { 
    int i, total;
    char word[100]; 
    printf("Input sentence :");
    gets(word);

    for ( i = 0; word[i] != '\0'; i++)
    {
        if (word[i] != ' ')
        {
            if (word[i]>= 65 && word[i] <= 90) { 
                printf("%c", word[i]); 
            }
            else if (word[i]>= 97 && word[i] <= 122)
            {
                printf("%c", word[i] - 32); 
            }
            else { 
                printf("%c", word[i]);
            }
        }
        else { 
            printf("\n");
            total++;
        }
        
    }
    printf("\n");
    printf("Total = %d words\n", total);
    
}