#include<stdio.h>
int is_prime(int n);
void print_primes(int min, int max);
int main()
{
    int prime;
    int a;
    int min,max;
    // printf("Enter a number : ");
    // scanf("%d", &a);
    // prime=is_prime(a);
    // printf("%d",prime);
    printf("Enter the minimum value : ");
    scanf("%d%*c", &min);
    printf("Enter the maximum value : ");
    scanf("%d%*c", &max);
    print_primes(min,max);
    return 0;
}

int is_prime(int n)
{
    int count=0;
    int res;
    if(n==1)
    {
        printf("%d is neither prime nor composite\n",n); 
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        res=n%i;
        if(res==0){
            count++;
        }
    }
    if (count<=2 && count!=0)
        {
            return 1;
        }
        else
        {
            return 0;
       }
}
void print_primes(int min, int max)
{
    int res;
    int count=0;
    for(int i=min+1; i<max; i++)
    {
        if(i==0)
        {
            continue;
        }
        for (int j=1;j<=i;j++)
        {
            if (i==1)
            {
                continue;
            }
            else {
                res=i%j;
                if(res==0){
                    count++;
                }
            }
        }
            if (count==2 && count!=0)
            {
                printf("%d ",i);
            }
        count=0;
    }
}