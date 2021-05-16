#include<stdio.h>
int main(){
    // char str[20];
    // gets(str);
    char str[50];

   printf("Enter a string : ");
   gets(str);
   for (int i = 0; i < str[i]!='\0'; i++)
   {
       printf("%c \n", str[i]);
   }
   

   printf("You entered: %s", str);
    
   return(0);
}