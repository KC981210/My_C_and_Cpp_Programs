#include<stdio.h>
/*
Write a program to display number of days in the given month and
year using switch case statement.
*/
int main()
{
    int year,month,days;
    printf("Enter month and year (month year): ");
    scanf("%d%d",&month,&year);
    days=(year%4==0 && year%100!=0 || year%400==0)?366:365;
    switch(month) 
    {
        case 1 :
           
            printf("Number of Days in January is 31");
            break;

        case 2:
            if(days==366)
                printf("Number of Days in February is 29 ");
            else
                printf("Number of Days in February is 28");
            break;

        case 3:

            printf("Number of Days in March is 31");
            break;

        case 4:
            printf("Number of Days in April is 30");
            break;

        case 5:
            printf("Number of Days in May is 31");
            break;

        case 6:
            printf("Number of Days in June is 30");
            break;

        case 7:
            printf("Number of Days in July is 31");
            break;

        case 8:
            printf("Number of Days in August is 31");
            break;

        case 9:
            printf("Number of Days in September is 30");
            break;

        case 10:
            printf("Number of Days in October is 31");
            break;

        case 11:
            printf("Number of Days in November is 30");
            break;

        case 12:
            printf("Number of Days in December is 31");
            break;


    }
    return 0;
}
