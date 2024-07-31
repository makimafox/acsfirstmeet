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
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j]= temp;
            }
            
        }
        
    }
    
    printf("Array after sorting :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d",array[i] );
    }

    return 0;
}