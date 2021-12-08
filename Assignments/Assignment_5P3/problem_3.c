#include<stdio.h>

int main ()
{
    int id,dept_no,i;
    char dc,ch;
   
    do 
    {
        printf("Employee Id         : ");
        scanf("%d%*c",&id);
        printf("Dept. No.          : ");
        scanf("%d%*c",&dept_no);
        printf("Designation Code   : ");
        scanf("%c%*c",&dc);
        switch(dept_no)
        {
            case 10:
                if(dc=='m'||dc=='M')
                    printf("Employee with employee id %d is working in \"Marketing\" department as \"Manager \".\n",id);
                else if(dc=='S')
                    printf("Employee with employee id %d is working in \"Marketing\" department as \"Supervisor\".\n",id);
                else if(dc=='s')
                    printf("Employee with employee id %d is working in \"Marketing\" department as \"Security Officer\".\n",id);
                else if(dc=='c'||dc=='C')
                    printf("Employee with employee id %d is working in \"Marketing\" department as \"Clerk\".\n",id); 
                break;
            case 20:
                if(dc=='m'||dc=='M')
                    printf("Employee with employee id %d is working in \"Management\" department as \"Manager \".\n",id);
                else if(dc=='S')
                    printf("Employee with employee id %d is working in \"Management\" department as \"Supervisor\".\n",id);
                else if(dc=='s')
                    printf("Employee with employee id %d is working in \"Management\" department as \"Security Officer\".\n",id);
                else if(dc=='c'||dc=='C')
                    printf("Employee with employee id %d is working in \"Management\" department as \"Clerk\".\n",id);
                break;  
            case 30:
                if(dc=='m'||dc=='M')
                    printf("Employee with employee id %d is working in \"Sales\" department as \"Manager \".\n",id);
                else if(dc=='S')
                    printf("Employee with employee id %d is working in \"Sales\" department as \"Supervisor\".\n",id);
                else if(dc=='s')
                    printf("Employee with employee id %d is working in \"Sales\" department as \"Security Officer\".\n",id);
                else if(dc=='c'||dc=='C')
                    printf("Employee with employee id %d is working in \"Sales\" department as \"Clerk\".\n",id); 
                break;
            case 40:
                if(dc=='m'||dc=='M')
                    printf("Employee with employee id %d is working in \"Designing\" department as \"Manager \".\n",id);
                else if(dc=='S')
                    printf("Employee with employee id %d is working in \"Designing\" department as \"Supervisor\".\n",id);
                else if(dc=='s')
                    printf("Employee with employee id %d is working in \"Designing\" department as \"Security Officer\".\n",id);
                else if(dc=='c'||dc=='C')
                    printf("Employee with employee id %d is working in \"Designing\" department as \"Clerk\".\n",id);
                break;
            default:
                printf("INVALID\n");
                break;    
        }
        printf("Do you want to continue (y/n)? ");
        ch=getchar();
        if(ch=='y')
            i=1;
        else if(ch=='n')
            i=0;
    }while(i!=0);
}