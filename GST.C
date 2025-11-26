#include<stdio.h>
#include<conio.h>
void main() {
float base_price, tax_percent, tax, total_price;
clrscr();
printf("Enter the Product Base Price: ");
scanf("%f", &base_price);
printf("Enter the GST Percentage: ");
scanf("%f", &tax_percent);

//Calculate GST amount
tax=base_price*(tax_percent/100);

//Calculate total price
total_price=base_price+tax;

printf("\nGST Amount = %.2f", tax);
printf("\nTotal Price(MRP) = %.2f", total_price);

getch();
}