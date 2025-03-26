#include<stdio.h>
#include<math.h>
void speed(float time, float distance)
{
    float speed;
    speed=distance/time;
    printf("The speed is %f km/hr",speed);    
}
int main()
{
    float time,distance;
    printf("\nEnter The Time Taken By The Object To Cover The Distance :");
    scanf("%f",&time);
    printf("\nEntre The Distance Covered By The Object :");
    scanf("%f",&distance);
    speed(time,distance);
    return 0;

}