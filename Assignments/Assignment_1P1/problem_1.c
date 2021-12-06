#include<stdio.h>
/*
Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product
*/
int main()
{
    /* int num1;
    int num2;
    int sum;
    int diff;
    int prod;
    */
    /*unsigned int num1;
    unsigned int num2;
    unsigned int sum;
    unsigned int diff;
    unsigned int prod;
    */

   /*signed int num1;
    signed int num2;
    signed int sum;
    signed int diff;
    signed int prod;
    */
   
    /*char num1;
    char num2;
    char sum;
    char diff;
    char prod;
    */

    long int num1;
    long int num2;
    long int sum;
    long int diff;
    long int prod;

    printf("Enter Numbers ");
    scanf("%d%d",&num1,&num2);

    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;

    /*printf("Sum of two numbers is %d\n",sum);
    printf("Difference between two numbers is %d\n",diff);
    printf("Product of two numbers is %d\n",prod);
    */

   /* printf("Sum of two numbers is %u\n",sum);
    printf("Difference between two numbers is %u\n",diff);
    printf("Product of two numbers is %u",prod);
    */

    /*printf("Sum of two numbers is %c\n",sum);
    printf("Difference between two numbers is %c\n",diff);
    printf("Product of two numbers is %c\n",prod);
    */

    printf("Sum of two numbers is %ld\n",sum);
    printf("Difference between two numbers is %ld\n",diff);
    printf("Product of two numbers is %ld",prod);
    
    return 0;
}