#include<stdio.h>

int main()
{
    int terms;
    int num=1;
    int num2=0;
    int num1;
    printf("Enter number of terms: ");
    scanf("%d",&terms);  
    // for(int i=0;i<terms;i++)
    // {
    //     num1=num+num2;
    //     printf("%d,",num1);
    //     num=num2;
    //     num2=num1;
    // }
    
    int j=0;
    while(j<terms)
    {
        num1=num+num2;
        printf("%d,",num1);
        num=num2;
        num2=num1;
        j++;
    }
    return 0;


}