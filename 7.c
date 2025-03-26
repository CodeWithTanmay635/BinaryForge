#include<stdio.h>
int main()
{
    int a;//=11011;
    int b=1;
    int ans=0;
   printf("\nEnter The Number :");
    scanf("%d",&a);
    while(a!=0)
    {
        ans=ans+(a%10)*b;
        a=a/10;
        b=b*2;

    }
    printf("\n%d",ans);

    return 0;
    }
