#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

float Equation(char x[20]) { 
    float result;
    int i;
    for ( i = 0; i < strlen(x); i++)
    {
        // กรณีไม่ใช่ตัวเลข 
        if (x[i]=='+' || x[i]=='-' || x[i]== '/' || x[i]=='*')
        {
            if (x[i]=='+')
            {
                result += atof(&x[i+1]);
                i++;
                continue;
            }
            else if (x[i]=='-')
            {
                result -= atof(&x[i+1]);
                i++;
                continue;
            }
            else if (x[i]=='*')
            {
                result *= atof(&x[i+1]);
                i++;
                continue;
            }
            else if (x[i]=='/')
            {
                result /= atof(&x[i+1]);
                i++;
                continue;
            }
            
            
            
        }
        // ใส่ค่าคงที่ตัวแรก
    else if (!isdigit(x[i-1]) && x[i-1]!='.')
        {
            result = atof(&x[i]);
        }
    }
    return result;
}
int main() { 
    int i, result;
    char x[20]; 
    printf("=========================================\n");
    printf("Input Equation : "); 
    scanf("%s", x);
    
    printf("result         : %.3f\n", Equation(x));
    printf("=========================================\n");
}