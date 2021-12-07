#include<stdio.h>
/*
Write a program to display number of days in the given year. Check
condition for leap year. A year is a leap year if it is divisible by 4 but
not by 100, except that years divisible by 400 are leap years.
Using logical operators.
*/
int main()
{
    int year;
    printf("Enter The year for which you want number of days : \n");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("The year you entered is/was a Leap year and has/had 366 days. ");
    else
        printf("The year you entered is/was not a Leap year and has/had 365 days. ");
    return 0;
}