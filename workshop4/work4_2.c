#include <stdio.h>

int main() {
    int num1 = 0;
    int num2 = 1;
    int num3;

    printf("0 1");
    for (int i = 0; i < 8; i++)
    {
        num3=num1+num2;
        printf(" %d",num3);
        num1=num2;
        num2=num3;
    }
    
}