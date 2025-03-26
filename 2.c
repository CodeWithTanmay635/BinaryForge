#include<stdio.h>
void factorialit(int A)
{
    unsigned long long int ans=1;
    for(int i=1;i<=A;i++)
    {
        ans=ans*i;

    }
    printf("\nFactorial of %d is %d",A,ans);

}
int fact(int A)
{
    if(A==0)
    {
        return 1;
    }
    else
    {
        return A*fact(A-1);
    }
}
int main()
{
    printf("\nEnter The Number Of A : ");
    int A;
    
    scanf("%d",&A);
    
    printf("\nEnter The Value Of B : ");
    int B;
    scanf("%d",&B);
    factorialit(A);
    printf("\nFactorial of %d is %d ",A,fact(A));
    return 0;

}