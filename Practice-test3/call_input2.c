#include<stdio.h> 
#include<math.h> 
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int compareOprator(char op1, char op2){ 
    // op หลังมากกว่า
    if ((op2 == '*' || op2 == '/')&&(op1 == '+' || op1 == '-'))return 1;
    // op หลังน้อยกว่าหรือเท่ากับ
    if ((op1 == '*' || op1 == '/')&&(op2 == '+' || op2 == '-'))return 2;
    // กรณีไม่มีตัวเปรียบเทียบ หรือเท่ากับ 
    else return 2;
}
int popStack(char operator[10], int post[10], int index, int i){
    // checking operator 
    int result ;
    if (operator[index] == '*' )
    {
        result =  (post[i-2] * post[i-1]);
    }
    else if(operator[index] == '/'){ 
        result =  (post[i-2] / post[i-1]);
    }
    else if(operator[index] == '+'){ 
        result =  (post[i-2] + post[i-1]);
    }
    else if(operator[index] == '-'){ 
        result =  (post[i-2] - post[i-1]);
    }
    return result;
}
int last_popStack(char operator[10], int post[10], int index, int i, int result){
    // checking operator 
    if (operator[index] == '*' )
    {
        result =  (result * post[i-1]);
    }
    else if(operator[index] == '/'){ 
        result =  (result / post[i-1]);
    }
    else if(operator[index] == '+'){ 
        result =  (result + post[i-1]);
    }
    else if(operator[index] == '-'){ 
        result =  (result - post[i-1]);
    }
    return result;
}


int main() { 
    int i, npost=0, nstack=0, result=0, post[8];
    char stack[10], num[10]="4*4/8";
    // result = atoi(&num[0]);
    for ( i = 0; i < strlen(num); i++)
    {
        if (isdigit(num[i]))
        {
            post[npost] = atoi(&num[i]);
            npost++;
        }
        // เป็น operator
        else{
            // empty stack
            if (strlen(stack)==0)
            {
                stack[nstack] = num[i];
                nstack++;
            }
            // compare operator
            else {
                // ในกรณีมากกว่า pop operator
                if (compareOprator(stack[nstack-1], num[i]) == 1)
                {
                    stack[nstack] = num[i];
                    nstack++;
                }
                // ในกรณีน้อยกว่าหรือเท่ากับ
                else{ 
                    do
                    {
                        result += popStack(&stack[nstack-1], post, nstack-1, npost);
                        npost = npost - 2;
                        stack[nstack-1] = '\0';
                    } while (compareOprator(stack[nstack-1], num[i]) == 1);
                }
            }
        }
    }
    // ขั้นตอน pop ออกมาให้หมด 
    if (strlen(stack)!=0)
    {
        if (npost==1)
            {
            result = last_popStack(stack, post, nstack-1, npost, result);
            }
        for ( i = 0; i <= strlen(stack); i++)
        {
            result += popStack(stack, post, nstack-1, npost);
            npost = npost - 2;
            stack[nstack-1] = '\0';
            nstack--;
        }
    }
    
    printf("%d\n\n", result);
        
}
