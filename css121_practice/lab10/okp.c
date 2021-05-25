#include <stdio.h>
#include <math.h>
#include<stdlib.h>

// float SD(float score, int n);
// char grades(float mean, float sd, float score);
int main()
{
    int id, i, n;
    float mean, score[40], sum, sd=0;
    char first[20], last[20], grade;
    // เปิดไฟล์ 
    FILE *student;
    student = fopen("stu_score.txt","w");
    for(i=1;;i++)
    {
        printf("record no #%d\n", i);
        printf("Id      : ");
        scanf("%d", &id);
        if(id == 0){break;}
        printf("First name  : ");
        scanf("%s", first);
        printf("Last name   : ");
        scanf("%s", last);
        printf("Score       : ");
        scanf("%f", &score[i]);
        fprintf(student,"%d %s %s %.2f\n", id, first, last, score[i]);
        sum = sum + score[i];
    }
    // ปิดไฟล์ 
    fclose(student);

    // หา SD
    n = i-1;
    mean = sum/n;
    for(i=1;i<=n;i++)
    {
        sd = sd + pow(score[i]-mean,2);
    }
    sd = sqrt(sd/n);
    printf("\n%f\n", sd);
    
    system ("clear");
    // open file; 
    student = fopen("stu_score.txt","r");
    printf("==================================================================\n");
    printf("No. Id First_name Last_name Score Grade\n");
    printf("==================================================================\n");
    // float score;
    int id2, j;
    char first2[10], last2[10];
    float score2[10];
    for(i=1;i<=n;i++)
    {
        fscanf(student,"%d%s%s%f", &id2, first2, last2, &score2[i]);
        if(score[i] >= mean+2*sd){grade =  'A';}
        else if(score[i] >= mean+sd && score[i] < mean+2*sd){grade = 'B';}
        else if(score[i] >= mean && score[i] < mean+sd){grade = 'C';}
        else if(score[i] >= mean-sd && score[i] < mean){grade = 'D';}
        else if(score[i] < mean-sd){grade = 'F';}
        printf("%-4d%-5d%10s%10s%14.2f%4c\n", i, id2, first2, &last2[i], score2[i], grade);
    }

    for ( i = 10; i > 0; i--)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i > score2[j])
            {
                printf("    ");
            }
            else { 

                printf("   *");
            }
        }
        printf("\n");
    }
    fclose(student);

    
    return 0;
}