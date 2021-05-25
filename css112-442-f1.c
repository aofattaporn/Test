#include <stdio.h>
#include <math.h>
#include<string.h>
#include<stdlib.h>
void Customerlist();
void Menulist();

// creat list customer 

int main()
{
    int day, month, year, i, j, fag=0, pquantity[10];
    char cid[10], id[10][10], name[10][10], address[10][10], pid[10][10];
    char buffname, buffadd[10];
    Menulist();
    // Customerlist();
    // FILE *customer; 
    // customer = fopen("customer_list", "r"); 
    // printf("Order date dd/mm/yy : "); 
    // scanf("%d/%d/%d", &day, &month, &year);
    // fflush(stdin);
    // printf("Customer Id         : "); 
    // scanf("%s", cid);
    // for(i=1;i<=2;i++)
    // {
    //     fscanf(customer, "%d%s%s%s\n", &i, id[i], name[i], address[i]);
    //     if (id[i][0]==cid[0] && id[i][1]==cid[1]&& id[i][2]==cid[2]&& id[i][3]==cid[3])
    //     { 
    //         fag = 1;
    //         printf("==================================\n"); 
    //         for ( j = 1;; j++)
    //         {
    //             printf("input Product id       : "); 
    //             scanf("%s", pid[j]);
    //             if(pid[j][0]== '*')break;
    //             printf("input Product quantity : "); 
    //             scanf("%d", &pquantity[j]);
    //         }
    //         fclose(customer); 
    //         system ("clear");
    //         FILE *bill; 
    //         bill = fopen("delivery_bill", "w"); 
    //         fprintf(bill, "%10sK.M.U.T.T company\n", "");
    //         fprintf(bill,"%10sDELIVERY BILL\n", "");
    //         fprintf(bill,"%20sELIVERY BILL\n", "");
    //         fprintf(bill, "Customer Id        : %s\n", id[i]);
    //         fprintf(bill, "Customer Id        : %s\n", name[i]);
    //         fprintf(bill, "Customer Id        : %s\n", address[i]);
    //         fprintf(bill, "\n===================================================");
    //         fprintf(bill, "===================================================");
    //         fprintf(bill, "\nNo. Id Productuct Name                        pricre Quanity");
    //         fprintf(bill, "\n\n===================================================");
    //         fprintf(bill, "===================================================");
    //         fclose(bill);
    //         break;
    //     }
    //     fag=0;
        
    // }
    // if (fag == 0 )
    // {
    //     printf("This customer record not found.\n");
    //     fclose(customer); 
    // }
}
void Menulist() { 
    int i; 
    float price[10]; 
    char menu[10][10], mid[10][10];
    FILE *menu_list; 
    menu_list = fopen("Product_list", "a"); 
    for ( i = 1;; i++)
    {
        printf("Input Pruduct #%d\n", i);
        printf("Enter ID      : "); 
        fflush(stdin);
        scanf("%s", mid[i]);
        fflush(stdin);
        if(mid[i][0] == '*') break;
        printf("Enter product : ");
        gets(menu[i]);
        printf("Enter price   : ");
        scanf("%f", &price[i]);
        printf("--------------------------------\n");
        fprintf(menu_list, "%-3d%-8s%-15s%-6.2f\n", i, mid[i], menu[i], price[i]);
    }
    fclose(menu_list);
     
}
void Customerlist() { 
    int i;
    char id[10][10], fname[10][10], lname[10][10], address[10][10];
        FILE *customer; 
        customer = fopen("customer_list", "w"); 
        for ( i = 1;; i++)
        {
        printf("-------------------------------------------\n");
        printf("cutomer #%d\n", i);
        fflush(stdin);
        printf("Enter ID      : "); 
        gets(id[i]);
        if(id[i][0] == '*') break;
        printf("Enter name    : ");
        // fflush(stdin);
        gets(fname[i]);
        printf("Enter address : ");
        gets(address[i]);
        fprintf(customer, "%-7s%-20s%-20s\n", id[i], fname[i], address[i]);
        }
        printf("-------------------------------------------\n");
        // fprintf(customer, "--------------------------------------------------------");
    fclose(customer);
}