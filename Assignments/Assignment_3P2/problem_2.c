#include<stdio.h>

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