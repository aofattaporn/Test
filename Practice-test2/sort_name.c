#include<stdio.h>
#include<string.h> 
int main() { 
    char name[20][20], buff[20]; 
    int i, j, n;
    for(i = 1;;i++) { 
        printf("name %d :", i);
        scanf("%s", name[i]);
        if (name[i][0] == '*')break; 
    }
    n = i - 1; 
    for ( i = 1; i <= n-1; i++)
    {
        for ( j = i+1 ; j <= n; j++)
        {
            if (strcmp(name[i], name[j]) < 0) continue;
            else { 
                strcpy(buff, name[i]); 
                strcpy(name[i], name[j]);
                strcpy(name[j], buff);
            }
            
        } 
    }
    for ( i = 1; i <= n; i++)
    {
        printf("%s   ", name[i]);
    }
    
    
}