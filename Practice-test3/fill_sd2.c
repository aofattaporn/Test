#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
#define NEWLINE "------------------------\n" 

int main() { 
    int mean, sd, n, id[10], i, score[i]; 
    char fname[5];
    FILE *allscore; 
    allscore = fopen("score_file.txt", "r"); 
    for ( i = 1;i <=2;i++)
    {
        fscanf(allscore,"%d%s%d", &id[i], &fname[i], &score[i]);
        printf("%d%s%d", id, fname, score[i]);
    }
    
}