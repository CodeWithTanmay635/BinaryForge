#include<stdio.h>
#include<math.h>
int main()
{
    int pa,ar,t,a,ci;
    printf("Enter The Principal Amount : ");
      scanf("%d",&pa);
   
  
    printf("Enter The Rate Of Interest : ");
    scanf("%d",&t);
    
   
    printf("Entre The Time : ");
    scanf("%d",&ar);
   
      
     a=pa*((pow(1+ar/100,t)));
        printf("The Amount Is : %d",a);
        
        ci=a-pa;
        printf("\nCompound Interest Is : %d",ci);
        printf("\n***********************************************************\n");
    return 0;
}
