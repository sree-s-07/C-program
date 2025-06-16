#include <stdio.h>
int main()
{
    int pid1, pid2, pid3;
    char pname1[100], pname2[100], pname3[100], cname[50],cmob[10];
    int pqty1, pqty2, pqty3,total1,total2,total3;
    int pprice1, pprice2, pprice3;
    float total, discountAmt, Discount, Payamt;

    printf("\nEnter Customer Name :");
    scanf("%s", &cname);
    printf("\nEnter Mobile Number :");
    scanf("%s", &cmob);

    printf("\nEnter 1 product details :");
    printf(" Product id :");
    scanf("%d", &pid1);
    printf("\nEnter Product Name :");
    scanf("%s", pname1);
    printf("\nEnter the Quantity :");
    scanf("%d", &pqty1);
    printf("\nEnter Product Price :");
    scanf("%d", &pprice1);

    printf("\n Product id :");
    scanf("%d", &pid2);
    printf("\n Enter Product Name :");
    scanf("%s", pname2);
    printf("\n Enter the Quantity :");
    scanf("%d", &pqty2);
    printf("Enter Product Price :");
    scanf("%d", &pprice2);

    printf("\n Product id :");
    scanf("%d", &pid3);
    printf("\n Enter Product Name :");
    scanf("%s", pname3);
    printf("\n Enter the Quantity :");
    scanf("%d", &pqty3);
    printf("Enter Product Price :");
    scanf("%d", &pprice3);

    total = (pqty1 * pprice1) + (pqty2 * pprice2) + (pqty3 * pprice3);
    total1= pqty1 * pprice1;
    total2= pqty2 * pprice2;
    total3= pqty3 * pprice3;
    

    if (total > 10000)
        Discount = 10;
    else if (total > 8000)
        Discount = 7;
    else if (total > 5000)
        Discount = 3;
    else
        Discount = 0;


    discountAmt = total * Discount / 100;
    Payamt = total - discountAmt;

    printf("\nCustomer Name %s:", cname);
    printf("\nMobile number %s", cmob);

    printf("\n----------------------------------------------------------");
    printf("\n|  ID   |        NAME         |  PRICE  |  QTY  |  TOTAL |");
    printf("\n----------------------------------------------------------");
    printf("\n|%-7d|%-21s|%-9d|%-7d|%-8d|", pid1, pname1, pprice1, pqty1, total1);
    printf("\n|%-7d|%-21s|%-9d|%-7d|%-8d|", pid2, pname2, pprice2, pqty2, total2);
    printf("\n|%-7d|%-21s|%-9d|%-7d|%-8d|", pid3, pname3, pprice3, pqty3, total3);
    printf("\n----------------------------------------------------------");
    printf("\n\t\t\t\t\t Total amount : %.2f", total);
    printf("\n\t\t\t\t\t Discount amount : %.2f", discountAmt);
    printf("\n\t\t\t\t\t Payment :%.2f", Payamt);
}