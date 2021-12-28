#include <stdio.h>
int power(int base , int index)
{
    if(index==0) 
    {
        return 1;
    }
    else
    {

        return base * power(base,index-1);
    }
}
int main()
{
    int base;
    int index;
    printf("Base: ");
    scanf("%d",&base);
    printf("Index: ");
    scanf("%d",&index);
    printf("%d",power(base,index));
    return 0;
}