#include<stdio.h>
#include<math.h>
void addvector(int a, int b,  float *result, float theta)
{
    *result = b*sin(theta)/a+b*cos(theta);
    printf("The Result Is : %f",*result);

}
int main()
{
    int a,b;
    float result, theta;
    printf("\nEnter The Value Of A : ");
    scanf("%d",&a);
    printf("\nEnter The Value Of B : ");
    scanf("%d",&b);
    printf("\nEnter The Value Of Theta : ");
    scanf("%f",&theta);
    addvector(a,b,&result,theta);
    return 0;

}