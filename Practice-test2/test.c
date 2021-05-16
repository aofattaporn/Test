#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,k,n,num[20],ten=0;
    char lek[20]="1101";
    // printf("Input lek tarn song : ");
    // gets(lek);
    n = strlen(lek) - 1;
    for(i=0;i<=n;i++)
    {
        if(lek[i] == '1')
        {
            num[i] = 1;
        }
        if(lek[i]=='0')
        {
            num[i]= 0;
        }
        printf("%d ",num[i]);
    }
    int power = 0;
    for(i=n;i>=0;i--)
    {
        ten += (num[i] * pow(2, power));
        power++;
    }
    printf("Lek tarn ten is %d ",ten);
}