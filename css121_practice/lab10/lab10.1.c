#include<stdio.h> 
#include <stdlib.h>
#include<math.h>

int main() { 
    int i, j, n, id[4]; 
    float score[5]; 
    char fname[5][20], lname[5][20]; 
    FILE *fstudent;
    fstudent = fopen("student.txt", "wt"); 
    for ( i = 1;; i++)
    {
        printf("record no # %d\n", i); 
        printf("Id\t : "); 
        scanf("%d", &id[i]); 
        if(id[i] == 0) break; 
        printf("First name : "); 
        scanf("%s", fname[i]);
        printf("Last name  : ");
        fflush(stdin);
        scanf("%s", lname[i]);; 
        printf("Score      : "); 
        scanf("%f", &score[i]); 
        fprintf(fstudent,"%d %s %s %.2f\n", id[i], fname[i], lname[i], score[i]);
    }
    
    
    system("clear");

    float  sum=0, mean, SD=0, sumsd=0; 
    char grade[i]; 
    n = i -1;
    FILE *fstudent2;
    fstudent2 = fopen("student.txt", "rt"); 
    
    for ( i = 1; i <= n; i++)
    {
        fscanf(fstudent2,"%d %s %s %f \n",&id[i],fname[i],lname[i],&score[i]);
        sum += score[i];
    }
    mean = sum / n; 
    
    for ( i = 1; i <= n; i++)
    {
        sumsd += pow((score[i]-mean), 2);
    }
    SD = sqrt(sumsd/n); 

    for ( i = 1; i <= n; i++)
    {
        if(score[i]< mean-SD) grade[i] = 'F';
        else if (score[i]< mean) grade[i] = 'D';
        else if (score[i]< mean+SD) grade[i] = 'C';
        else if (score[i]< mean+(2*SD)) grade[i] = 'B';
        else grade[i] = 'A';
            
    }

    printf("=========================================================\n");
    printf("No.  Id        First_name     Last_name    Score    Gade \n");
    printf("=========================================================\n");
    for ( i = 1;i<=n; i++)
    {
        printf("%-5d%-10d%-15s%-13s%-5.2f%4c\n",i,id[i],fname[i],lname[i],score[i],grade[i]);
    }
    fclose(fstudent2);
    
}

