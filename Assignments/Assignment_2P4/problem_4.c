#include<stdio.h>
int main ()
{
  int a,b,c;
  float avg;
  printf("Enter three integer numbers : ");
  scanf("%d%d%d",&a,&b,&c);
  avg=(a+b+c)/3;
  printf("Average of Three numbers is %.2f",avg);
}