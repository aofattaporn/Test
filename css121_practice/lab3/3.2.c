#include<stdio.h> 
int main() { 
    char name[100]; 
    int avg, i, total = 0;
    printf("name :   "); 
    gets(name);

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            avg = i;
        }
    }
    printf("Output :");
    for (i = avg; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf(" ");

    for (i = 0; i <= avg ; i++)
    {
        printf("%c", name[i]);
    }
    printf(" "); 
}