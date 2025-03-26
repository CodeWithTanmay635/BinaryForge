#include<stdio.h>

int main()

{
    int rad,surface_area,volume,csarea;
    printf("Enter the radius of the sphere : ");
    scanf("%d",&rad);
    surface_area=4*3.14*rad*rad;
    volume=(4/3)*3.14*rad*rad*rad;
    csarea=3.14*rad*rad;
    printf("The surface area of the sphere is : %d\n",surface_area);
    printf("The volume of the sphere is : %d\n",volume);
    printf("The curved surface area of the sphere is : %d\n",csarea);
    return 0;
}


