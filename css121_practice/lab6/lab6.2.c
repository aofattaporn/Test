#include<stdio.h> 
int main() { 
    int i, flag=0, j; 
    char word[10], *pword, s[100], *ps; 
    printf("Input sentence : "); 
    gets(s); 
    printf("================="); 
    printf("\nsearch word : "); 
    gets(word); 
    pword =&word[0];
    ps = &s[0];
    
    for ( i = 0; *ps != '\0'; i++)
    {
        // เหมือนกับตัวแรกของประโยครึป่าว
        if (*pword == *ps)
        {
            // วนตาม loop เล็ก 
            
            for ( j = 0; *pword!='\0'; j++)
            {
                if (*pword != *ps)
                {
                    flag = 1; 
                    break; 
                }
                ps++;
                pword++;
            }
            if (flag == 0)
            {
                flag = 2;
                break;
            }
            flag = 0;     
        }
        ps++;
    }
    printf("================="); 
    if (flag == 2)
    {
        printf("\nThe \"%s\" is on the table.", word);
    }
    else{ 
        printf("\nThis word not found.");
    }
}