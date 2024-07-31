#include <stdio.h>

int main() {
    int array[10] = {50,30,80,10,40,90,20,70,60,100};
    int number;
    int check = 0;
    
    scanf("%d",&number);
    

    for (int i = 0; i < 10 ; i++)
    {
        if (number==array[i])
        {
            printf("Value %d found at index %d",array[i],i);
            check=1;
            break;
        }
    }
    if (check!=1)
    {
        printf("Value %d not found in the array",number);
    }
    return 0;
}