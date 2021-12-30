#include<stdio.h>
void chr_repeat(int repeat,char ch);
int main()
{
    int repeat;
    char ch;
    printf("Enter a Character from a-z or A-Z or (*,+,-,/,%%): ");
    scanf("%c",&ch);
    printf("How many times characters has to be printed : ");
    scanf("%d",&repeat);
    chr_repeat(repeat, ch);
    return 0;
}
void chr_repeat(int repeat,char ch)
{
    for(int i=1;i<=repeat;i++)
    {
        printf("%c",ch);
    }
}