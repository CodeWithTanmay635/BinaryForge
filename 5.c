#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a;
    int cnt=0;
    printf("Enter A Number To Check Prime Or Not\n");
    scanf("%d",&a);
        if (a<1)
        
            printf("%d IS Not A Prime Number",a);
            else{
                for(int i=1;i<=a;i++)
                {
                    if(a%i==0)
                    cnt++;
                }
            if(cnt>2)
            printf("%d Is Not A prime Number",a);
            else
            printf("%d Is A Prime Number",a);
            }
     
return 0;
}