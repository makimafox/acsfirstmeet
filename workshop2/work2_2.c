#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);

    if (num1 % 400 == 0)
    {
        printf("%d is a leap year. February has 29 days.", num1);
    }
    else if (num1 % 100==0)
    {
        printf("%d is not a leap year. February has 28 days.", num1);
    }
    else if (num1 % 4==0)
    {
        printf("%d is a leap year. February has 29 days.", num1);
    }
    else
    {
        printf("%d is not a leap year. February has 28 days.", num1);
    }

    return 0;
}