#include<stdio.h>
/*
Write a program to accept three digit number and find sum of all
its digits.
*/
int main()
{
    int num,a,b,c,sum;
    printf("Enter three digit number : ");
    scanf("%d",&num);
    a=num/100;
    b=(num-a*100)/10;
    c=(num-a*100-b*10);
    sum=a+b+c;
    printf("Sum of all digits is : %d",sum);
    return 0;
}