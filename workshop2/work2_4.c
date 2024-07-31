#include <stdio.h>
#include <math.h>

int main()
{
    float num1,num2;

    scanf("%f %f", &num1 ,&num2);

    float bmi = num1/pow(num2,2);
    if (bmi>=30)
    {
        printf("Your BMI is %.2f\n",bmi);
        printf("You are obese.");
    }else if (bmi>=25.0)
    {
        printf("Your BMI is %.2f\n",bmi);
        printf("You are overweight.");
    }else if (bmi>=18.5)
    {
        printf("Your BMI is %.2f\n",bmi);
        printf("You are normal weight.");
    }else{
        printf("Your BMI is %.2f\n",bmi);
        printf("You are underweight.");
    }
    
    return 0;
}