#include<Stdio.h>
void leapyear(int year)
{
    if(year%4==0)
   {
         if(year%100==0)
         {
              if(year%400==0)
              {
                printf("\n%d is a Leap Year",year);
              }
              else
              {
                printf("\n%d is not a Leap Year",year);
              }
         }
         else
         {
              printf("\n%d is a Leap Year\n",year);
         }
    }
    else
    {
         printf("\n%d is not a Leap Year\n",year);
   }
}
int main()
{
    printf("\nEnter The Year : ");
    int year;
    scanf("%d",&year);
    leapyear(year);
    return 0;

}