#include <stdio.h>

int main() {
    int result=0;
    int num1;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num1);
        result+=num1;
        if (num1<=0)
        {
            break;
        }
        
    }
    printf("%d",result);
    return 0;
}