#include<stdio.h>
/*
Write a program to display number of days in the given year. Check
condition for leap year. A year is a leap year if it is divisible by 4 but
not by 100, except that years divisible by 400 are leap years.
Without using logical operators.
*/
int main()
{
    int year,d4,dn100,d400;
    printf("Enter The year for which you want number of days : \n");
    scanf("%d",&year);
    d4=year%4;
    dn100=year%100;
    d400=year%400;
    if(d4==0)
    {

        if(dn100!=0)
        {

            printf("The year you entered is/was a Leap year and has/had 366 days.\n");
        }
        else if(d400==0)
        {
            printf("The year you entered is/was a Leap year and has/had 366 days.\n");   
        }
        else 
        {

            printf("The year you entered is/was not a Leap year and has/had 365 days.\n");
            
        }
    }
    else
    {
    
        printf("The year you entered is/was not a Leap year and has/had 365 days.\n");   
    }
    
    return 0;
}