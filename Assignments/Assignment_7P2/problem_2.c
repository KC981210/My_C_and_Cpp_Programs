#include<stdio.h>
int calculate(int num1,int num2,char op);
int main()
{
    int num1,num2;
    printf("Enter Num1 : ");
    scanf("%d%*c",&num1);
    printf("Enter Num2 : ");
    scanf("%d%*c",&num2);
    char op;
    printf("Enter the operation you want to perform (+,-,*,/) : ");
    scanf("%c",&op);
    printf("%d %c %d = %d",num1,op,num2,calculate(num1,num2,op));

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
            a=num1/num2;
            break;
        }
    }
    return a;
}