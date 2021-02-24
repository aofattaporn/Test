#include<stdio.h> 
int main() { 
    int i, total = 0;
    char word[100]; 
    printf("Input sentance :");
    gets(word);
    for ( i = 0; word[i] != '\n'; i++)
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
                total++;
            }
            
        }
        else { 
            total++;
            printf("\n");
        }   
    }
    printf("\n");
    printf("Total = %d words\n", total);
}