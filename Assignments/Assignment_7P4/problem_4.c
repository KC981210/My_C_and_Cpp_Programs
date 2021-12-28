#include<stdio.h>
int power(int base , int index);
int main()
{
    int base,index;
    printf("Base : ");
    scanf("%d", &base);
    printf("Index : ");
    scanf("%d", &index);
    printf("%d",power(base,index));
    return 0;
}

int power(int base , int index)
{
    int res=base;
    for (int i=1;i<index;i++)
    {
        res=res*base;
    }
    return res;
}