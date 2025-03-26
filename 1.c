#include<stdio.h>
int main()
{
    int num1,num2,sum;
    char op ;
    printf("\nEnter First Number =");
    scanf("%d",&num1);
    printf("\nEnter Second Number =");
    scanf("%d",&num2);
    printf("\nEnter Operator (+,-,*,/ )");
    scanf(" %c",&op);
    switch (op)
    {
        case '+':
        sum = num1+num2;
        printf("\nAddition Of Num1 %d And Num2 %d Is =%d",num1,num2,sum);
        break;
        case '-':
        sum = num1 - num2;
        printf("\nSubstraction Of Num1 %d And Num2 %d Is = %d",num1,num2,sum );
        break;
        case '*':
        sum = num1 * num2;
        printf("\nMultiplication Of Num1 %d And Num2 %d Is = %d",num1,num2,sum);
        break;
        case '/':
        sum = num1 / num2;
        printf("\nDivision Of Num1 %d And Num2 %d Is = %d",num1,num2,sum);
        break;
        default :
        printf("\nInvalid Operator");
         
    }
    return 0;
}