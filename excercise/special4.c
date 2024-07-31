#include <stdio.h>

int main()
{

    float h=0, w=0;
    float result = 0,r=0;
    int mode;
    

    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");
    scanf("%d",&mode);

    if (mode==1)
    {
        printf("Enter the width: ");
        scanf("Enter the width: %f",&w);
        printf("Enter the height: ");
        scanf("%f",&h);
        if (w<=0 || h<=0)
        {
            printf("The area of the rectangle is: Error");
        }else{
            result = w*h;
            printf("The area of the rectangle is: %.2f",result);
        }
    }else if (mode==2)
    {
        printf("Enter the base: ");
        scanf("%f",&w);
        printf("Enter the height: ");
        scanf("%f",&h);
        if (w<=0 || h<=0)
        {
            printf("The area of the triangle is: Error");
        }else{
            result = (w*h)/2;
            printf("The area of the triangle is: %.2f",result);
        }
    }else if (mode==3)
    {
        printf("Enter the radius: ");
        scanf("%f",&r);
        if (r<=0)
        {
            printf("The area of the circle is: Error");
        }else{
            result = 3.14*(r*r);
            printf("The area of the circle is: %.2f",result);
        }
    }else{
        printf("Invalid choice");
    }
}