#include <stdio.h>
int main()
{
 float amount, discount = 0, delivery = 0, total;
 int type;
 printf("Enter order amount");
 scanf("%f", &amount);

 printf("Enter membership type (1-Premium, 0-Regular) ");
 scanf("%d", &type);

 if (amount >= 500)
 {
    delivery = 0;
    if (type == 1)
    {
        discount = amount * 0.10;
        }
 }
    else
        delivery = 50;
    total = amount - discount + delivery;

 printf("Order Amount = Rs. %.2f\n", amount);
 printf("Discount = Rs. %.2f\n", discount);
 printf("Delivery Charge = Rs. %.2f\n", delivery);
 printf("Final Amount to Pay = Rs. %.2f\n", total);
    



}
