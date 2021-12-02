#include<stdio.h>
#include<limits.h>
int main()
{
    int num;
    char chr;
    char ch='A';
    double num1;
    float num2;
    long int num3; 
    printf("%d\n%d\n%d\n%d\n%d\n",sizeof(num),sizeof(ch),sizeof(num1),sizeof(num2),sizeof(num3));
    printf("%d",INT_MAX);
    printf("%d\n",INT_MIN);
    printf("%d",SCHAR_MAX);
    printf("%d",SCHAR_MIN);
    return 0;
}