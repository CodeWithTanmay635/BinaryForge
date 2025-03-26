#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void find_root(int a, int b, int c)
{
    float d, r1, r2;
    d = b*b - 4*a*c;
    if(d>0)
    {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %f\nRoot2 = %f\n", r1, r2);
    }
    else if(d==0)
    {
        r1 = r2 = -b/(2*a);
        printf("Roots are real and equal\n");
        printf("Root1 = %f\nRoot2 = %f\n", r1, r2);
    }
    else
    {
        r1 = -b/(2*a);
        r2 = sqrt(-d)/(2*a);
        printf("Roots are imaginary\n");
        printf("Root1 = %f + %fi\nRoot2 = %f - %fi\n", r1, r2, r1, r2);
    }
}           
int main()
{
    int a, b, c;
    printf("Enter the coefficients of the quadratic equation\n");
    scanf("%d%d%d", &a, &b, &c);
    find_root(a, b, c);
    return 0;
}
