#include<stdio.h>
/*
Write a program to accept a point in Cartesian co-ordinate system
and decide the quadrant in which the point lies. Also check for
special cases point lies on ± x axis, ± y axis, and origin
*/
int main()
{
    float coordx,coordy;
    int i=1;
    char ch;
    while(i)
    {
        printf("Enter x coordinate in Cartesian Coordinate System :\n");
        scanf("%f%*c",&coordx);
        printf("Enter y coordinate in Cartesian Coordinate System :\n");
        scanf("%f%*c",&coordy);

        if(coordx>0 && coordy>0)
        
            printf("Quadrant of point (%.1f,%.1f) is \"1st Quadrant\"\n\n",coordx,coordy);

        else if (coordx<0 && coordy>0)

            printf("Quadrant of point (%.1f,%.1f) is \"2nd Quadrant\"\n\n",coordx,coordy);
        
        else if(coordx<0 && coordy<0)

            printf("Quadrant of point (%.1f,%.1f) is \"3rd Quadrant\"\n\n",coordx,coordy);

        else if(coordx>0 && coordy<0)

            printf("Quadrant of point (%.1f,%.1f) is \"4th Quadrant\"\n\n",coordx,coordy);

        else if(coordx==0 ||coordy==0)
            if(coordx<0)

                printf("The point (%.1f,%.1f) lies on -x axis\n\n",coordx,coordy);

            else if(coordx>0)

                printf("The point (%.1f,%.1f) lies on +x axis\n\n",coordx,coordy);
            
            else if(coordy<0)

                printf("The point (%.1f,%.1f) lies on -y axis\n\n",coordx,coordy);

            else if(coordy>0)

                printf("The point (%.1f,%.1f) lies on +y axis\n\n",coordx,coordy);

            else if(coordx==0 & coordy==0)

                printf("The point you entered is origin (0,0)\n\n");
        
        printf("Do you Want to continue (y/n)\n");
        ch=getchar();
        if (ch=='y'||ch=='Y')
        {
            printf("\n");
            continue;
        }
        else if (ch=='n'||ch=='N')
        {
            i=0;
            printf("\n");
        }  
        
    }
    return 0;
}