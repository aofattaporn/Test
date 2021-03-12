#include<stdio.h> 
int main() { 
    int i, j, n=0; 
    char w[100]; 
    printf("Input sentence :"); 
    gets(w);
    for ( i = 0; w[i] != '\0'; i++)
    {
        if (w[i] != ' ')
        {
            if (w[i]>=97 && w[i]<=122)
            {
                w[i] = w[i] - 32;
            }
            printf("%c", w[i]); 

        }
        else { 
            n++; 
            printf("\n"); 
        }
        
    }
    printf("\nTotal %d word ", n+1); 
}