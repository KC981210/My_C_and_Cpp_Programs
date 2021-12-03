#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Number in decimal is %d\n",num);
    printf("Number in octal is %o\n",num);
    printf("Number in hexadecimal is %x\n",num);
    printf("Number in char is %c\n",num);
    return 0;
}