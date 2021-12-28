#include<stdio.h>
int flag=0;
int num1,num2;
int calculate(int num1,int num2,char op);
int main()
{
    printf("Enter Num1 : ");
    scanf("%d%*c",&num1);
    printf("Enter Num2 : ");
    scanf("%d%*c",&num2);
    char op;
    printf("Enter the operation you want to perform (+,-,*,/) : ");
    scanf("%c",&op);
    int res=calculate(num1,num2,op);
    if(flag==1)
    {
        printf("Invalid Divisor");
    }
    else
    {
    printf("%d %c %d = %d",num1,op,num2,res);
    }

}
int calculate(int num1,int num2,char op)
{
    int a=0;
    switch(op)
    {
        case '+':
        {
            a=num1+num2;
            break;
        }
        case '-': 
        {
            if (num1>num2)
            {
                a=num1-num2;
            }
            else
            {
                a=num2-num1;
            }
            break;
        }
        case '*':
        {
            a=num1*num2;
            break;
        }
        case '/':
        {
            if(num2==0)
            {
                flag=1;
                return flag;
            }
            else
            {
            a=num1/num2;
            }
            break;
        }
    }
    return a;
}