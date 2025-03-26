#include<stdio.h>
int main(){
    int n,c,a,b[100],d[100];
    printf("Enter Number for Array :");
    scanf("%d",&n);
    for(c=0;c<=n;c++){
        scanf("%d ",&b[c]);
        for(c=n-1;b[c];c--){
            d[n-c-1]=b[c];
        }
        

    }
}

