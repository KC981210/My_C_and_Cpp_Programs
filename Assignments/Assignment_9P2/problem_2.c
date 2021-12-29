#include <stdio.h>
int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
         return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;
    printf("Enter nth term of Fibonacci series : ");
    scanf("%d",&n);
    printf("%d term is  %d ",n,fibonacci(n));
}