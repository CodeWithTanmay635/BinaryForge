#include<stdio.h>
void celsius(float f){
    float c;
    c = (f-32) * 5/9;
    printf("Temperature In celsius is : %f\n",c);
}
void fahrenheit (float c){
    float f;
    f = (c * 9/5) +32;
    printf("Tempreture In fahrenhite is : %f\n",f );
    }
void take(){
    float c;
    float f;
    printf("Enter Celsius :");
    scanf("%f",&c);
    printf("Enter Fahrenhite :");
    scanf("%f",&f);
}
int main(){
    float c,f;
    int choice;
    printf("1. Celsius to ferhenhite\n");
    printf("2. Ferhenhite To Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    if(choice == 1){
        printf("Enter Fahrenheit: ");
        scanf("%f", &f);
        celsius(f);
    }
    else if (choice ==2){
        printf("Enter Celsius: ");
        scanf("%f", &c);
        fahrenheit(c);
    }
    else{
        printf("Invalid Choice\n");

    }
    
    return 0;
    }

