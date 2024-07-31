#include <stdio.h>

int main() {

    int array[10]={};
    int array1[10][2]={{0,0}};
    int mode = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            array1[i][0] = array[i];
            if (array[i]==array[j])
            {
                array1[i][1]++;
            }
            
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            if (array1[i][1]>array1[j][1])
            {
                mode = array1[i][0];
            }
            
        }
        
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d",array1[i][j]);
            
    //     }
    //     printf("\n");
    // }

    printf("Mode = %d",mode);
    
}