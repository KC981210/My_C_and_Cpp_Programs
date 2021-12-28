#include<stdio.h>
void factors(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    factors(n);
    return 0;
}
void factors(int n)
{
    printf("all factors: ");
    for(int i=1;i<n;i++)
    {
        int res;
        res=n%i;
        if(res==0)
        {
            printf("%d ",i);
        }
    }
}