#include <stdio.h>

int main() {
    int array[10] = {};
    int temp;
    int number;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&number);
        array[i]=number;
    }

    // 5 3 8 6 2 7 4 1 9 0
    for (int i = 0; i < 10-1; i++)
    {
        for (int j = 0; j < 10-i-1; j++)
        {
            if (array[j]<array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",array[i] );
    }

    return 0;
}