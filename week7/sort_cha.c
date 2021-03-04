#include<stdio.h> 
int main() { 
    char w[30], buffer; 
    int i, j, befor, after, n=0; 
    printf("Input word :"); 
    gets(w); 
    // นับจำนวนตัวของ W
    for ( i = 0; w[i] != '\0'; i++) n++; 
    for ( i = 0; i < n-1; i++) { 
        for ( j = i+1; j < n; j++)
        {
            // เปรียบเทียบในกลุ่มตัวใหญ่ 
            if (w[i]>=65 && w[i]<=90) befor=w[i]; 
                else befor = w[j]-32; 
            if (w[j]>=65 && w[j]<=90) after=w[j]; 
                else after = w[j]-32;
            
            
            if (befor<=after)continue;
            else // k > m
            { 
                buffer = w[i]; 
                w[i] = w[j]; 
                w[j] = buffer;
            }   
        }
    }
    printf("Output : %s\n", w); 

}