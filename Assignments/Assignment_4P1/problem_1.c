#include<stdio.h>
/*
Write a program to accept a 5 digit number and check whether it is
a numeric palindrome. (If reversed number is same as entered
number it is called palindrome).
*/
int main()
{
    int num,a,b,c,d,e,palidrome;
    printf("Enter a 5 digit number between (10000 and 99999) : ");
    scanf("%d",&num);
    a=num/10000;
    b=(num-a*10000)/1000;
    c=(num-a*10000-b*1000)/100;
    d=(num-a*10000-b*1000-c*100)/10;
    e=(num-a*10000-b*1000-c*100-d*10);
    palidrome=e*10000+d*1000+c*100+b*10+a;

    if(num==palidrome) 
        printf("Number you entered is Palidrome number.");
    else
        printf("Number you entered is not Palidrome number.");
    return 0;
}