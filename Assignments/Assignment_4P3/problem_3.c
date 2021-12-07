#include<stdio.h>
/* 
Write a program that will calculate the price for a quantity entered
from the keyboard, given that the unit price is Rs.5 and there is a
discount of 10 percent for quantities over 30 and a 15 percent
discount for quantities over 50.
*/
int main()
{
    int quant;
    float price;
    printf("Enter the quantity of product : ");
    scanf("%d",&quant);
    printf("\n");
    if(30<quant && quant<=50)
    {
        price=(float)quant*5*0.9;
        printf("Price of %d quantity of product is Rs.%.2f\n",quant,price);  
    }
    else if(quant>50)
    {
        price=(float)quant*5*0.85;
        printf("Price of %d quantity of product is Rs.%.2f\n",quant,price);
    }
    else 
    {
        printf("Price of %d quantity of product is Rs.%d.00\n",quant,quant*5);
    }
    return 0;
}