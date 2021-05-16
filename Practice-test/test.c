#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    // char base_digits[16] =
	//  {'0', '1', '2', '3', '4', '5', '6', '7',
	//   '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char num[10];
    int base, power, i, j, lnum, buff; 
    char decimal;
    printf("Input number decimal base : \n"); 
    gets(num); 
    lnum = strlen(num);
    power = lnum-1;
    for ( i = 0; i < lnum; i++)
    {
         
        buff = num[i] - '0';
        decimal += buff * pow(2, power);
        printf("%d\n", decimal);
        power--;

    }
    


}