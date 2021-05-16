#include<stdio.h> 
#include<string.h> 
#include <stdlib.h>
#include<math.h>
int convert(char base_num[20], int base) { 
    int decimal, i, size_base, power, buff; 
    size_base = strlen(base_num);
    power = size_base - 1; 
    for ( i = 0; i < size_base; i++)
    {
        // case charecter
        if (base_num[i]=='A')
        {
            buff = 10;
        }
        else if(base_num[i]=='B'){ 
            buff = 11;
        } 
        else if(base_num[i]=='C') { 
             buff = 12;
        }
        else if(base_num[i]=='D') { 
             buff = 13;
        }
        else if (base_num[i]=='E') { 
             buff = 14;
        }
        else if (base_num[i]=='C') { 
             buff = 15;
        }
        // case number 
        else { 
            buff = base_num[i] - '0'; 
        }
        decimal += (buff*pow(base, power));
        power--;
    }
    return decimal; 
    
}
int main() { 
    char base_num[20]; 
    int base;
    system("clear");
    printf("Input base : ");
    scanf("%d", &base);
    printf("Input number : ");
    scanf("%s", base_num);
    printf("result : %d\n", convert(base_num, base));
    
}
