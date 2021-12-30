#include<stdio.h>
int gcd(int num1,int num2)
{
    if (num1%num2==0)
    {
        return num2;
    }
    else
    {
        return gcd(num2,num1%num2);
    }
}
int main()
{
    int num1,num2;
    printf("Enter First number : ");
    scanf("%d",&num1);
    printf("Enter Second number : ");
    scanf("%d",&num2);
    if (num2==0)
    {
        printf("Second Number cannot be 0");
        return 1;
    }
    int res = gcd(num1,num2);
    printf("GCD is %d",res);
    return 0; 
}