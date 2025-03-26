#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random,guess;
    int nog=0;
    char name[20];
    
    srand(time(NULL));
    printf("\t\t\t\tWelcome To The World Of Guessing Numbers\n");
    random = rand() % 100 + 1;
   {
    printf("\nEnter Your Name :");
        scanf("%s",name);
   }   
     do{
         
        printf("\nPlease Enter Your Guess Between (1-100) : ");
        scanf("%d",&guess);
        nog++;
        if(guess<random){
            printf("\nGuess Larger Number.");

        }else if(guess>random){
            printf("\nGuess A Smaller Number.");
        }else{
            printf("\nCongratulation!!! %s You Have Successfully Guessed The Number In %d Attempts.",name,nog);
        }

    } while (guess != random);
    printf("\n\t\t\t:)Arogatigusaimus gamu ni shimasu (.)(.)");
    printf("\nDeveloped By : Chutpaglu ");
    return 0;
    }