#include<stdio.h>
/*
Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values.
*/
int main()
{
    int num,a,b,c,d;
    printf("Enter a 4 digit number : ");
    scanf("%d",&num);
    a=num/1000;
    b=(num-a*1000)/100;
    c=(num-a*1000-b*100)/10;
    d=(num-a*1000-b*100-c*10);
    printf("%d %d %d %d\n",a,b,c,d);

    printf("%d%d%d%d\n",d,c,b,a);

    a=a*1000;
    b=b*100;
    c=c*10;
    printf("%d + %d + %d + %d\n",a,b,c,d);
    return 0;
}