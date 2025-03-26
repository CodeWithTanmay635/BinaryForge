//function prototype 
#include<stdio.h>
void hello (char[],int);
int main()
{
    char name[20];
    int age;
    printf("ENTER YOUR NAME :");
    scanf("%s",name);
    printf("ENTER YOUR AGE :");
    scanf("%d",&age);
    hello(name,age);
    return 0;
}
void hello(char name[],int age){
    printf("Hello! %s your are %d years old",name,age);
}