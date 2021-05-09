#include <stdio.h>
#include <math.h>

float SD(float score, int n);
char grades(float mean, float sd, float score);
int main()
{
    int id, i, n;
    float mean, score[40], sum, sd=0;
    char first[20], last[20], grade;
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
    fclose(student);
    n = i-1;
    mean = sum/n;
    for(i=1;i<=n;i++)
    {
        sd = sd + pow(score[i]-mean,2);
    }
    sd = sqrt(sd/n);
    printf("\n%f\n", sd);
    //system ("cls");
    student = fopen("stu_score.txt","r");
    printf("==================================================================\n");
    printf("No. Id First_name Last_name Score Grade\n");
    printf("==================================================================\n");
    // float score;
    for(i=1;i<=n;i++)
    {
        fscanf(student,"%d%s%s%f", &id, first, last, &score);
        if(score[i] >= mean+2*sd){grade =  'A';}
        else if(score[i] >= mean+sd && score[i] < mean+2*sd){grade = 'B';}
        else if(score[i] >= mean && score[i] < mean+sd){grade = 'C';}
        else if(score[i] >= mean-sd && score[i] < mean){grade = 'D';}
        else if(score[i] < mean-sd){grade = 'F';}
        printf("%-2d%-6d%24s%24s%6f%3c\n", i, id, first, last, score, grade);
    }
    fclose(student);
    return 0;
}