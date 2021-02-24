#include<stdio.h> 
int main() { 
    int i, num = 0, buffer, count;
    char name[100][20], first[100], c;
    for ( i = 1; ; i++)
    {
        printf("input name-surname : "); 
        gets(name[i]);
        num++;
        if(name[i][0] == '*')break;
    }
    printf("======================\n"); 
    printf("input search char : "); 
    scanf("%c", &c); 
    for ( i = 1; i <= num ; i++)
    {
        if (c >= 65 && c <= 90 )
        {
            buffer = name[i] - 32;
            if (name[i][0]== c || buffer == c) printf("name %d is %s\n", ++count, name[i]);
        }
        else if (c >= 97 && c <= 122 )
        {
            buffer = name[i][0] + 32;
            if (name[i][0]== c || buffer == c) printf("name %d is %s\n", ++count, name[i]);
        }
    }
}