                                        //Student Management System

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


struct student{
    char name[100];
    int id;
    char schoolname[200];
    char course[100];
    int password;
    float marks[10];  
};

void create_management_account(struct student id[], int *student_id);
void select_course(struct student id[], int student_id);
void create_password(struct student id[], int student_id);
void display();
void school_detailes(struct student id[], int *student_id);
void check_academic_report(struct student id[], int student_id);
void verify_password(struct student id[], int student_id);
void verify_id(struct student id[], int student_id);

int main()
{
    struct student id[100];
    int student_id=0;
    int choice;
    printf("\t\t\t\t\tRegister Through Your Student ID \n\n");
    while(1){
        display();
        printf("\nEnter Your choice :");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            create_management_account(id, &student_id);
        break;
        case 2:
            school_detailes(id, &student_id);
        break;
        case 3:
            //What to add can't understand!!
        break;
        case 4:
            check_academic_report(id, student_id);
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("\nInvalid Choice!!!!\n:|\n");
        break;
        }
    }
    return 0;
}



void create_management_account(struct student id[], int *student_id)
{
    
    printf("Enter Your Name :");
    scanf(" %[^\n]s", id[*student_id].name);
    
    printf("Enter Your ID :");
    scanf("%d", &id[*student_id].id);
    create_password(id, *student_id);
    printf("Enter Your College Name :");
    scanf("%[^\n]s",id[*student_id].schoolname );
    printf("Enter Your Course (BCA/BSC/BTech/MCA/MTech) :\n");
   
    
    select_course(id, *student_id);
}

void select_course(struct student id[], int student_id)
{
 int ch;
 system("cls");
 printf("\n\t1. BCA  \t2. B.Tech  \t3. BSC  \t4. MCA   \t5. M.Tech \n");
 
 scanf("%d",&ch);
 printf("Enter Your ID :");
 scanf("%d",&id[student_id].id);
 
    switch(ch){
        case 1:
        printf("\nBCA course detail\n");
        printf("\nBCA is a 3 year undergraduate program that focuses on the theoretical and practical aspects of computer science and its applications. It covers various topics such as programming, data structures, algorithms, computer networks, and software development.");
        break;
        case 2:
        printf("\nBSC course detail\n");
        printf("\nBSC is a 3 year undergraduate program that focuses on the theoretical and practical aspects of computer science and its applications. It covers various topics such as programming, data structures, algorithms, computer networks, and software development.\n");
        break;
        case 3:
        printf("\nB.Tech Course detail\n");
        printf("\nB.Tech is a 4 year undergraduate program that focuses on the theoretical and practical aspects of computer science and its applications. It covers various topics such as programming, data structures, algorithms, computer networks, and software development.\n");
        break;
        case 4:
        printf("\nMCA course Detail\n");
        printf("\nMCA is a 2 year postgraduate program that focuses on the theoretical and practical aspects of computer science and its applications. It covers various topics such as programming, data structures, algorithms, computer networks, and software development.\n");
        break;
        case 5:
        printf("\nMTech course detail\n");
        printf("\nMTech is a 2 year postgraduate program that focuses on the theoretical and practical aspects of computer science and its applications. It covers various topics such as programming, data structures, algorithms, computer networks, and software development.\n");
        break;
        default:
        printf("Course Not Found\n");
        break;
    }
  
}

void display()
{
    system("cls");
    printf("\n\n\n\n1. Create Management Account\t");
    printf("2. Add School Details\t");
    printf("3. \t");
    printf("4. Check Academic Report\t");
    printf("5. Exit\t");
}

void check_academic_report(struct student id[], int student_id)
{
    verify_id(id, student_id);
    verify_password(id, student_id);
    int sum,s,s2,s3,s4,s5,s6;
    double avg;
    system("cls");
    s = rand() % 100 + 1;
    printf("Mathematics = %d\n",s);
    s2 = rand() % 50 + 1;
    printf("Programming = %d\n",s2);
    s3 = rand() % 100 + 1;
    printf("Business = %d\n",s3);
    s4 = rand() % 50 + 1;
    printf("Fundmental Of Technology = %d\n",s4);
    s5 = rand() % 50 + 1;
    printf("English = %d\n",s5);
    s6 = rand() % 50 + 1;
    printf("Lab on C = %d\n",s6);
    sum = s + s2 + s3 + s4 + s5 + s6;
    printf("The Sum Of All Subjects Is : %d\n",sum);
    avg = (sum/6);
    printf("The Average Of The The Sum Is : %2.lf\n",avg);
    if(avg>=90){
        printf("Grade : A++");
    }
    
    if(avg>=80)
    {
        printf("Grade : A");
    }
    if(avg>=70)
    {
        printf("Grade : B");
    }
    if(avg>=60)
    {
        printf("Grade : C");

    }
    if(avg>=50)
    {
        printf("Grade : D");
    }
    if(avg>=40)
    {
        printf("Grade : E");
    }
    else{
        printf("Grade : F");
    }
}
void verify_id(struct student id[], int student_id)
{
    int entered_id;
    
   do{ 
    printf("\nEnter Yot ID :");
    scanf("%d",&entered_id);
    if(entered_id == id[student_id].id)
    {
        printf("ID Matched\n");
    }
    else{
        printf("ID Not Matched\n");

    }
   }while(entered_id != id[student_id].id);
    printf("ID Matched\n");
}
void create_password(struct student id[], int student_id)
{
    int re_enter;
    printf("\nCreate Your Password :");
    scanf("%d",&id[student_id].password);
    
   do{
    printf("\nRe-Enter Your Password :");
    scanf("%d",&re_enter);
     if(id[student_id].password == re_enter)
    {
        printf("Password Matched\n");

    } else{
        printf("Password Not Matched\n");
    }
}while(id[student_id].password != re_enter);
    printf("Password Created Successfully\n");
}


void verify_password(struct student id[], int student_id)
{
    int entered_password;
    printf("\nEnter Your Password :");
    scanf("%d", &entered_password);
    while (entered_password != id[student_id].password) {
        printf("Incorrect Password\n");
        printf("\nEnter Your Password :");
        scanf("%d", &entered_password);
    }
    printf("Password Matched\n");
}
void school_detailes(struct student id[], int *student_id)
{
    int rate;
    char school_address[100];
    char rank[10];
    char  exp[100];
    printf("\nEnter Your College Name :");
    scanf("%s", id[*student_id].schoolname);
    printf("\nEnter Your College Address :");
    scanf("%s",school_address);
    printf("\nEnter Your College NCCA Rank :");
    scanf("%s",rank);
    printf("\nEnter Your College Experience :");
    scanf("%s",exp);
    printf("\nRate Your College Out Of 10 :");
    scanf("%d9",&rate);
   if(rate>10){
    printf("You Can Rate till 10");
   }else{
        printf("Thanks For Your Rating!!");
   }
}