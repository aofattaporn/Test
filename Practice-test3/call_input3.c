#include<stdio.h> 
#include<math.h> 
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int compareOprator(char op1, char op2){ 
    // op หลังมากกว่า
    if ((op2 == '*' || op2 == '/')&&(op1 == '+' || op1 == '-'))return 1;
    // op หลังน้อยกว่าหรือเท่ากับ
    else if ((op1 == '*' || op1 == '/')&&(op2 == '+' || op2 == '-'))return 2;
    //หรือเท่ากับ 
    else if ((op1 == '*' || op1 == '/')&&(op2 == '*' || op2 == '/'))return 2;
    else if ((op1 == '+' || op1 == '-')&&(op2 == '+' || op2 == '-'))return 2;
    // กรณีไม่มีตัวเปรียบเทียบ 
    else return 3;
    
}
int popStack(char operator[10], int post[10], int index, int i){
    // checking operator 
    int result ;
    if (i==1)
    {
        i++;
    }
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
    
    if (i==2)
    {
        i--;
        post[i-1] = '\0';;
    }
    else{ 
        post[i-2] = '\0';
        post[i-1] = '\0';
    }
    return result;
}

int main() { 
    int i, npost=0, nstack=0, result=0, post[8];
    char stack[10], num[10]="15-5*4";
    // result = atoi(&num[0]);
    for ( i = 0; i < strlen(num); i++)
    {
        if (isdigit(num[i]) && isdigit(num[i-1]))continue;
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
                    while (compareOprator(stack[nstack-1], num[i])==2 && strlen(stack)!=0)
                    {
                        if (npost > 1)
                        {
                            post[npost - 2] = popStack(stack, post, nstack-1, npost);
                            npost = npost - 1;
                            stack[nstack-1] = '\0';
                            nstack--;
                        }
                        else{ 
                            post[npost-1] = popStack(stack, post, nstack-1, npost);
                            npost = npost - 1;
                            stack[nstack-1] = '\0';
                            nstack--;
                        }
                        // printf("dfdff");
                    }
                        stack[nstack] = num[i];
                        nstack++;
                    
                    }
            }
        }
    }
    // ขั้นตอน pop ออกมาให้หมด 
    if (strlen(stack)!=0)
    {
        for ( i = 0; i <= strlen(stack); i++)
        {
            if (npost==1)
            {
                post[nstack-1] = popStack(stack, post, nstack-1, npost);
            }
            else { 
                post[npost - 2] += popStack(stack, post, nstack-1, npost);
                // update npost and nstack
                npost = npost - 2;
                nstack--;
                stack[nstack] = '\0';
            }
        }
    }
    printf("%d\n\n", post[0]);
        
}
