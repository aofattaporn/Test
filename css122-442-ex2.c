#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main() { 
    char karaoke[10][10]={" ", "Hnung", "Song", "Sam", "Si", "Ha", "Hok", "Ced", "Paed", "Kea"}; 
    char num2[20];
    char result[100], buff[80];
    int i, inum, fnum, size_inum, x, j, size_fnum;
    printf("\n\nInput Number :");
    scanf("%s", &num2[20]);
    inum = atoi(&num2[0]); 
    for ( i = 0;  num2[i]!= '.'; i++);
    size_inum = i;
    // for ( j = i;  num2[j]!= '\0'; j++);
    // size_fnum = j;
    fnum = atoi(&num2[size_inum+1]);

    for ( i = size_inum; i>= 1; i--)
    {
        if (i==7)
        {
            x = num2[5 - i] - '0';
            strcat(buff, karaoke[x]);
            strcat(buff, "Lan");
        }
        else if (i==6)
        {
             x = num2[5 - i] - '0';
            strcat(buff, karaoke[x]);
            strcat(buff, "Saean");
        }
        else if (i==5)
        {
            x = num2[5 - i] - '0';
            // x = inum / 10000;
            strcat(buff, karaoke[x]);
            strcat(buff, "Hmun");
        }
        else if (i==4)
        {
            x = num2[5 - i] - '0';
            strcat(buff, karaoke[x]);
            strcat(buff, "Phan");
        }
        else if (i==3)
        {
            x = num2[5 - i] - '0';
            strcat(buff, karaoke[x]);
            strcat(buff, "Roy");
        }
        else if (i==2)
        {
            x = num2[5 - i] - '0';
            if (x == 2)
            {
                strcat(buff, "Yi");
            }
            else { 
                strcat(buff, karaoke[x]);
            }
           
            strcat(buff, "Sib");
        }
        else if (i==1)
        {
            x = num2[5 - i] - '0';
            if (x==1)
            {
                strcat(buff, "Xed");
            }
            else { 
                strcat(buff, karaoke[i]);
            }
            strcat(buff, "Bath");
        }   
    }

    // if (num2[size_inum] == '.')
    // {
    //     for ( i = size_fnum; i >= 1; i--)
    //     {
    //         if (i==2)
    //         {
    //             x = num2[5 - i] - '0';
    //             if (x == 2)
    //             {
    //                 strcat(buff, "Yi");
    //             }
    //             else { 
    //                 strcat(buff, karaoke[x]);
    //             }
    //             strcat(buff, "Sib");
    //         }
    //         else if (i==1)
    //         {
    //             x = num2[5 - i] - '0';
    //             if (x==1)
    //             {
    //                 strcat(buff, "Xed");
    //             }
    //             else { 
    //                 strcat(buff, karaoke[i]);
    //             }
    //             strcat(buff, "Satang.");
    //         }   
    //     }
        
    // }
    // else { 
    //     strcat(buff, "Thun.");
    // }
    
    printf("Output :  %s\n\n", buff);
    

}