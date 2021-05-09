#include<stdio.h> 
#include<math.h>
int main() { 
    int i, n;
    char grade[i]; 
    float mean=(55+65+75+70)/4, score[5]={55, 65, 75, 70}, SD, sum=0, sumsd=0;
    printf("%.2f\n", mean);
    for ( i = 0; i < 4; i++)
    {
        sumsd += pow((score[i]-mean), 2);
        
    }
    SD = sqrt(sumsd/4); 

    for ( i = 0; i < 4; i++)
    {
        if(score[i]< mean-SD) grade[i] = 'F';
        else if (score[i]< mean) grade[i] = 'D';
        else if (score[i]< mean+SD) grade[i] = 'C';
        else if (score[i]< mean+(2*SD)) grade[i] = 'B';
        else grade[i] = 'A';
    }

    for ( i =0; i < 4; i++)
    {
        printf("%d %c\n", i, grade[i]);
    }
    
}