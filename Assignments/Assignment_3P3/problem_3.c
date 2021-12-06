#include<stdio.h>
#include<math.h>
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