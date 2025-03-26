#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    
    int h,m,s;
    h=m=s=0;
    while(1){
        system("cls");
        printf("\t\t\t\t\t\tDigital Clock\n");
        printf("\n\t\t\t\t\t\t%d : %d : %d",h,m,s);
        
        sleep(1);
        s++;
        if(s==60){
            m++;
            s=0;
        }
        else if(m==60){
            h++;
            m=0;
         
        }
        else if(h==24){
            h=0;
            m=0;
            s=0;

        }
    }
    return 0;
}