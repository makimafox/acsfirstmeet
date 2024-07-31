#include <stdio.h>

int main() {
    int array[5] = {};
    int sum =0 ;
    int number;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&number);
        sum+=number;
        array[i]=number;
    }

    printf("Sum of entered numbers: %d\n",sum);
    printf("Numbers in array:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d",array[i]);
    }
    return 0;
}