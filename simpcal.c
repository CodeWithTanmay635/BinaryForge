#include<stdio.h>
#include<math.h>
double division(double,double);
double modulus(int,int);
void print_menu();
int main()
{
    
    int choice;
    double first,second,result;
   
    while(1){
        print_menu();
        scanf("%d",&choice);
        if(choice == 7){
            break;
        }

        printf("\nPlease Enter The First Number :");
        scanf("%lf",&first);
        printf("\nPlease Enter The Second Number :");
        scanf("%lf",&second);
        switch (choice)
        {
        case 1:                                                                             //Addition
            result = first + second;
            printf("\nAddition of %lf + %lf = %lf",first,second,result);
            break;
        case 2:                                                                             //substraction
           result = first - second;
           printf("\nSubstraction Of %lf - %lf = %lf",first,second,result);
            break;
        case 3:                                                                             //Multiplication
           result = first * second ;
           printf("\nMultiplication Of %lf x %lf = %lf",first,second,result);
            break;
        case 4:                                                                             //Division
            result = division(first, second);
            
            printf("\nDivision Of %lf / %lf = %lf",first,second,result);
            break;
        case 5:                                                                             //Modulus
           result = modulus(first, second);
           printf("\nModulus Of %lf And %lf = %lf",first,second,result);
           break;
        case 6:                                                                             //Power
            result = pow(first , second); 
            printf("\nPower Of %lf And %lf = %lf",first,second,result);         
            break;
            default:
            printf("\nInvalid Choice");
            break;
        }
     
    };
    return 0;
    }

    double division(double a, double b) {
        if (b==0){
            fprintf(stderr,"Dividing With Zero!!, You Idiot");
            return NAN;
        }else{
            return a/b;
        }
    }
double modulus(int a, int b){
    if (b==0){
        fprintf(stderr,"\nHey You Idiot You Entered Zero!!!!!!!!!!!!!!!!!");
       return NAN;
    }else {
        return a % b;
    }
}
void print_menu(){
    printf("\n\t\t\t\t\tWELCOME TO MY SIMPLE CALCULATOR PROGRAM");
    printf("\n_____________________________________________________________");
    printf("\n What Do You Waana Calculate ");
    printf("\n 1. Addition");
    printf("\n 2. Substraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Modulus");
    printf("\n 6. Power");
    printf("\n 7. Exit\n");
    printf(" Now, Enter Your Choice Between (1-7) : ");
}