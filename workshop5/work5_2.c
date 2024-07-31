#include <stdio.h>

int main() {
    int array[10] = {};
    int number;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&number);
        array[i]=number;
    }
    int min = array[0];
    int max = array[1];
    for (int i = 0; i < 10; i++)
    {
        if (min>array[i])
        {
            min =array[i];
        }else if (max<array[i])
        {
            max =array[i];
        }
    }
    
    printf("Maximum number: %d\n",max);
    printf("Minimum number: %d",min);

    return 0;
}