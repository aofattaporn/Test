#include<stdio.h> 
#include<string.h> 
#include<math.h>
#define LINE "\n============================\n"
float sd(float mean, int score[20], int num) { 
    int i; 
    float sd, sum=0.0; 
    for (i = 0; i < num; i++)
    {
        sum += pow((score[i] - mean), 2);
    }
    sd = sqrt(sum/num);
    return sd; 
    
}
int main() { 
    int score[20]={4, 6, 7, 5, 3, 9, -1}, lscore, i, num=0; 
    float sum=0, mean;
    // lscore = len(score);
    for ( i = 0;; i++)
    {
        // printf("Input score : "); 
        // scanf("%d", &score[i]);
        if (score[i] < 0 ) break; 
        sum += score[i];     
        num++;
    }
    mean = sum / num; 
    printf(LINE);
    printf("value of sd : %.5f", sd(mean, score, num)); 
    printf(LINE);

}