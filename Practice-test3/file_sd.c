#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
#define NEWLINE "------------------------\n"

int main() { 
    char fname[10], lname[10], id;
    int i, score[10]; 
    FILE *allscore; 
    allscore = fopen("score_file.txt", "w"); 
    for ( i = 1;; i++)
    {
        printf("#%d\n", i);
        printf("Input ID : "); 
        scanf("%s", &id); 
        int numid = atoi(&id);
        if(id == '*')break; 
        printf("Input first name : "); 
        fflush(stdin);
        scanf("%s", fname); 
        // printf("Input last name  : ");
        // fflush(stdin); 
        // scanf("%s", lname); 
        printf("Input score : "); 
        fflush(stdin);
        scanf("%d", &score[i]); 
        printf(NEWLINE); 
        
        fprintf(allscore, "%-5d %-8s %d\n", numid, fname, score[i]);
    }
    fclose(allscore); 
    
}