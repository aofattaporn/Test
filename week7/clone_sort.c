#include<stdio.h> 
int main() { 
    int i, j, buff =0, n, after, befor; 
    char w[100]; 
    printf("Input sentenc :"); 
    gets(w); 
    for(i = 0; w[i]!='\0'; i++)n++; 
    for(i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (w[i]<=122 && w[i]>=97)
            {
                after = w[i] - 32; 
            }
            if (w[j]<=122 && w[j]>=97)
            {
                befor = w[j] - 32; 
            }

            if (after > befor)
            {
                buff = w[i]; 
                w[i] = w[j]; 
                w[j] = buff; 
            }
        }
    }
    printf("Output : %s\n", w); 
}