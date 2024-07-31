#include <stdio.h>

int main() {
    int number, result=0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &number);
        result+=number;
    }
    printf("%d",result);
}