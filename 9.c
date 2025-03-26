 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int a;
     int ans=0 ;
     int i=0;
     printf("\nEnter The Number : ");
     scanf("%d",&a);
     while(a!=0)
     {
      if(a%10==0)
      ans=ans+1*pow(10,i);
      else
      ans=ans+(a%10)*pow(10,i);
      a=a/10;
      i++;

     }
     printf("\nDecimal Number is : %d ",ans);
     return 0;
 }