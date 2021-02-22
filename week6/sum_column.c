#include<stdio.h> 
int main() { 
    // รับมิติของแต่ละเมทริก 
    int i, j, a[10][10], c[10], m, n; 
    printf("matrix :");
    scanf("%d, %d", &m, &n); 

    // input element
    printf("input element of matrix A\n"); 
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
    

}