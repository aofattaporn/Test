#include<stdio.h> 
int main() { 
    int a[100], b[100], c[100], na = 0, nb = 0, nc, k = 1, i, j;
    printf("input set a :\n");
    printf("----------------------------\n");
    for (int i = 1; ; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        na++;
        if (a[i] == -1) break;  
    }

    printf("\ninput set b :\n");
    printf("----------------------------\n");
    for (i = 1; ; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &b[i]);
        nb++;
        if (b[i] == -1) break;  
    }

    // set set_intersection
    for (i = 1; i < na; i++)
    {
        for (j = 1;  j < nb; j++)
        {
            if (a[i] == b[j])
            {
                c[k] += b[j];
                nc++;
                k++;
            }
        }
    }

    // print setintersection
    if (nc == 0)
    {
        printf("empty set \n");
    }
    else { 
        printf("The intersection of set a and b : ( ");
        for (int i = 1; i <= nc; i++) { 

            // if(c[i]==c[i-1]) break;
            printf("%d", c[i]);
                if (i < nc)
                {
                    printf(", ");
                }
                else { 
                    printf(" )\n");
                }
        } 
    }
}