#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],i,j;
    printf("Enter the Elements of 1st Matrix:\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
        scanf("%d",&a[i][j]);
    }
    }
    printf("Enter The Elements Of 2nd Matrix :\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of Matrix\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
    }
    return 0;
}