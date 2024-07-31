#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 >=80)
    {
        printf("Grade :A");
    }
    else if (num1 >=75)
    {
        printf("Grade :B+");
    }
    else if (num1 >=70)
    {
        printf("Grade :B");
    }
    else if(num1 >=65)
    {
        printf("Grade :C+");
    }
    else if(num1 >=60)
    {
        printf("Grade :C");
    }
    else if(num1 >=55)
    {
        printf("Grade :D+");
    }
    else if(num1 >=50)
    {
        printf("Grade :D");
    }else{
        printf("Grade :F");
    }

    return 0;
}