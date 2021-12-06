#include<stdio.h>
/*
Write a program to convert temperature in Celsius to Fahrenheit
and vice versa.
Formula for conversion is
 ºC = 5/9 x (ºF - 32).
*/
int main()
{
    double degC,degF;
    printf("Enter temperature in degree Celsius : ");
    scanf("%lf",&degC);
    degF=9*degC/5+32;
    printf("Temperature in degree Fahrenheit is %.2lf\n\n",degF);

    printf("Enter temperature in degree Fahrenheit : ");
    scanf("%lf",&degF);
    degC=(double)5/9*(degF-32);
    printf("Temperature in degrees Celsius is %.2lf \n",degC);
    return 0;
}