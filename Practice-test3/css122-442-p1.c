#include<stdio.h>
#include<math.h> 

int main() { 
    int i, num=4, product=1, div = 2, count=0, a[20], buff=0, x, j;
    printf("Input n : "); 
    scanf("%d", &num);
    printf("============================\n"); 
    for ( i = 1; i <= num; i++)
    {
        printf("number #%d : ", i); 
        scanf("%d", &a[i]);
    }

    for (i = 0;; i++)
    {
        // หารจำนวนตัวที่หารลงตัว 
        for ( i = 1; i <= num; i++)
            {
            if (a[i]%div==0)
            {
                count++;
            }
        }

        // checking coount if count == num 
        if(count == num) { 
            product *= div;
            for ( i = 1; i <= num; i++)
            {
                a[i] = a[i] / div; 
            }  
        }
        // checking coount if count != num 
        else if (count < num && count != 0){ 
            product *= div;
            for ( i = 1; i <= num; i++)
            {
                if (a[i] % div == 0)
                {
                    a[i] = a[i] / div; 
                }
            }
            div++;
        }
        else if (count == 0)
        {
            for ( i = 1; i <= num; i++)
            {
                if (a[i]==1)
                {
                    product *= (a[i] % (div-1));
                }
                else{
                    product *= a[i];
                }
            }
            break;
        }
        // กรณีหารไม่ครบ
        count = 0;
    }
    printf("============================"); 
    printf("\nresult :%d\n", product); 
    

}