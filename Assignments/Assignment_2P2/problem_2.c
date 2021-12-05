#include<stdio.h>

int main()
{
    short int num;
    printf("Enter Integer number between 1 and 3200 : ");
    scanf("%d",&num);
    printf("Table of %d is\n",num);
    printf("%d * %d = %d\n",num,1,num*1);
    printf("%d * %d = %d\n",num,2,num*2);
    printf("%d * %d = %d\n",num,3,num*3);
    printf("%d * %d = %d\n",num,4,num*4);
    printf("%d * %d = %d\n",num,5,num*5);
    printf("%d * %d = %d\n",num,6,num*6);
    printf("%d * %d = %d\n",num,7,num*7);
    printf("%d * %d = %d\n",num,8,num*8);
    printf("%d * %d = %d\n",num,9,num*9);
    printf("%d * %d = %d\n",num,10,num*10);
    return 0;
}