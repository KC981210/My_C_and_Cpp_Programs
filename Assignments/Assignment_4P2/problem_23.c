#include<stdio.h>
/*
Write a program to display number of days in the given year. Check
condition for leap year. A year is a leap year if it is divisible by 4 but
not by 100, except that years divisible by 400 are leap years.Using conditional operator
*/
int main()
{
    int year,days;
    printf("Enter The year for which you want number of days : \n");
    scanf("%d",&year);
    days=(year%4==0 && year%100!=0 || year%400==0)?366:365;
    printf("The number of days in year you entered are/were %d",days);
    return 0;
}