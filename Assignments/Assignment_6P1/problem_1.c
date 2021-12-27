#include<stdio.h>
#include<math.h>
enum opn
{
    sum=1,reverse,palidrome,armstrong_no
};
    int main()
    {
        int num,i;
        enum opn choice;
        while(1)
        {
            printf("Enter following for:\n(1) Sum of Digits.\n(2) Reverse the Number.\n(3) Check for numeric palindrome.\n(4) Check for Armstrong number.\n(0) Exit\n");
            scanf("%d",&choice);
            if (choice==0)
            {
                break;
            }
             switch(choice)
            {
                case sum:
                {
                    int sum=0;
                    printf("Enter the  number : ");
                    scanf("%d",&num);
                    while(num!=0)
                    {
                        int rem=num%10;
                        num/=10;
                        sum+=rem;
                    }
                    printf("\nSum is %d\n\n",sum);
                    break;
                }
                case reverse:
                {
                    int rev=0;
                    printf("Enter the  number : ");
                    scanf("%d",&num);
                    int count=0;
                    int a=num;
                    while(a!=0){
                        a=a/10;
                        ++count;
                    }
                    for (int j=count-1;j>=0;j--)
                    {
                        double raise=pow(10,j);
                        int rem=num%10;
                        num/=10;
                        rev+=raise*rem;       
                    }
                    printf("\nReverse is %d\n\n",rev);
                    break;
                }
                case palidrome: 
                {
                    int rev=0;
                    printf("Enter the  number : ");
                    scanf("%d",&num);
                    int count=0;
                    int a=num;
                    while(a!=0){
                        a=a/10;
                        ++count;
                    }
                    int b=num;
                    for (int j=count-1;j>=0;j--)
                    {
                        double raise=pow(10,j);
                        int rem=num%10;
                        num/=10;
                        rev+=raise*rem;
                    }
                    if (b==rev)
                    {
                        printf(" Is a numeric palidrome\n\n");
                    }
                    else
                    {
                        printf("Is not a numeric palidrome\n\n");
                    }
                    break;
                }
                case armstrong_no:
                {
                    int arm=0;
                    printf("Enter the  number : ");
                    scanf("%d",&num);
                    int count=0;
                    int a=num;
                    while(a!=0){
                        a=a/10;
                        ++count;
                    }
                    int b=num;
                    for (int j=count-1;j>=0;j--)
                    {
                        int rem=num%10;
                        num/=10;
                        double num1=pow((double)rem,3);
                        arm+=num1;
                    }
                    if(b==arm){
                        printf(" Is an Armstrong number\n\n");
                    }
                    else{
                        printf("Is not an Armstrong number\n\n");
                    }
                }
            }
        }
        return 0;   
    }