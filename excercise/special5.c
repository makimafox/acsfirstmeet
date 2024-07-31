#include <stdio.h>

int main() {

    int array1[3][3] ={{}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    
    int min = array1[0][0];
    int max = array1[1][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (min>array1[i][j])
        {
            min =array1[i][j];
        }else if (max<array1[i][j])
        {
            max =array1[i][j];
        }
        }
    }
    printf("The maximum value in the matrix is: %d",max);
}