#include<stdio.h>
#include<math.h>
/*
Write a program to calculate Area and Perimeter of Triangle for
given length of three sides of triangle.
Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c
Area = sqrt(s x (s – a) x (s – b) x (s - c)) 
*/
int main()
{
    float a,b,c,s,peri,area;
    printf("Enter length of sides of triangle (a b c) : ");
    scanf("%f%f%f",&a,&b,&c);
    peri=a+b+c;
    s=peri/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle is %.2f and Perimeter of Triangle is %.2f",area,peri);
    return 0;
}