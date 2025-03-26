#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int accountnum;
    char name[100];
    double balance;
    char accounttype[10];
    int pin;
   
}info;
void createaccount(info accounts[],int *numaccount);
void depositemoney(info accounts[],int numaccount);
void moneywithdraw(info accounts[],int numaccount);
void checkbalance (info accounts[],int numaccount);
void display();
int vpin(info accounts);

  int main()
  {
    info accounts[100];
    int numaccount=0;
    int choice;
    printf("\t\t\t\t\tRegister your Bank Account \n\n");
    while(1){
        
        display();
        scanf("\n%d",&choice);
        switch(choice){
            case 1:
            createaccount(accounts , &numaccount);
            break;
            case 2:
            depositemoney(accounts , numaccount);
            break;
            case 3:
            moneywithdraw(accounts , numaccount);
            break;
            case 4:
            checkbalance(accounts , numaccount);
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("\nInvalid choice Please the number between 1-5 only");
            break;
            
            
        }
    }
    return 0;
  }
    void createaccount(info accounts[], int *numaccount)
{
    printf("Enter Your Account Number :");
    scanf("%d",&accounts[*numaccount].accountnum);

    printf("Enter Account Holder's Name :");
   scanf("%s",accounts[*numaccount].name);  
    printf("Enter The Type Of Account :");
    scanf("%s",accounts[*numaccount].accounttype);
    
    printf("Enter Your Intitail Balance :");
    scanf("%lf",&accounts[*numaccount].balance);
      
    printf("Set The 4-Digit Pin :");
    scanf("%d",&accounts[*numaccount].pin);
     
    (*numaccount)++;
    printf("Your Account Has Been Registered Successfully!!\n\n\n");
}

void depositemoney(info accounts[], int numaccount)
{
int accountno;
double amount;
printf("Enter Your Account Number :");
scanf("%d",&accountno);

printf("Enter The Amount :");
scanf("%lf",&amount);
for(int i=0; i<numaccount; i++){
  if(accounts[i].accountnum == accountno){
    accounts[i].balance += amount;
    printf("Amount Deposited To Your Account Successfuly!!\n");

  }
  
}
    printf("Account Not Found!!\n");
}

void moneywithdraw(info accounts[], int numaccount)
{
  int accno;
  double amount;
  printf("Enter Your Account Number :");
  scanf("%d",&accno);

  for(int i=0;  i<numaccount; i++){
    if(accounts[i].accountnum == accno){
      if(vpin(accounts[i])){
        printf("Enter The Amount You Want To Withdrawl :");
        scanf("%lf",&amount);
        if(amount <= accounts[i].balance){
            accounts[i].balance -= amount;
          printf("Money Withdrawal Successfulluy!!  \n:)\n");
        
        } else{
          printf("Insufficient Balance !!\n:(\n");
        }
      }
      return;
    }
  }
  printf("Account Not Found !!\n");
}

void checkbalance(info accounts[], int numaccount)
{
  int accountnumber;
 
  printf("*********************************\n");
  printf("Enter Your Account Number :");
  scanf("%d",&accountnumber);
  for(int i=0; i < numaccount; i++){
    if(accounts[i].accountnum == accountnumber ){
      if(vpin(accounts[i])){
        printf("*********************************\n");
        printf("Your Current Bank Balance Is : %.2lf\n",accounts[i].balance);
        printf("*********************************\n");
      }
      return ;
    }
  }
  printf("Account Not Found\n");
}
void display()
{
    printf("1. Create account\t");
    printf("2. Deposit Money\t");
    printf("3. Witdrawal Money\t");
    printf("4. Check Balance\t");
    printf("5. Exit\n");
}
int vpin(info accounts)
{
  int enteredpin;
  printf("Enter PIN :");
  scanf("%d",&enteredpin);
    if (enteredpin == accounts.pin){
      return 1;
    } else {
      printf("Incorrect PIN\n");
      return 0;
    }
}