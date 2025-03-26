#include<stdio.h>
int main()
{
    int a=5, *b, **c;
    b=&a;
    c=&b;
    printf("\nValue of A : %d",a);
    printf("\nValue Of Address Of A :%p", &a);
    printf("\nValue Of B : %p",b);
    printf("\nValue Of B At Address Of A : %d",*b);
    printf("\nValue Of Address Of B :%p",&b);
    printf("\nValue Of C : %p",c);
    printf("\nValue Of C At Address Of B : %p",*c);
    printf("\nValue Of C At Address Of A : %d",**c);
    printf("\nValue Of Address Of C :%p",&c);
    return 0;
}