#include<stdio.h> 
#include<math.h> 
int determinant(int a[10][10]) { 
    int x= (a[1][1]*a[2][2]*a[3][3]) + (a[1][2]*a[2][3]*a[3][1]) + (a[2][1]*a[3][2]*a[1][3]) - (a[3][1]*a[2][2]*a[1][3]) 
                    - (a[2][1]*a[1][2]*a[3][3])- (a[3][2]*a[2][3]*a[1][1]);
    return x;
}
int main() { 
    int n, m, i, j, a[10][10]; 
    // printf("Input n,m : "); 
    // scanf("%d, %d", &n, &m);
    printf("MATIX A\n");
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            printf("a[%d][%d] :", i, j); 
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            printf("%6d ", a[i][j]); 

        }
        printf("\n");
    }
    
    printf("\nDeterminant of 3X3 matrix: %d\n", determinant(a));
    
}