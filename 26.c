#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<malloc.h>

#define MAX1 5
#define MAX2 7
int *arr;
int* create(int);
void sort(int *, int);
void display(int *, int);
int merge(int*, int*);
int main()
{
    int *a,*b,*c;
    system("cls");
    printf("Enter elements for first array:\n\n");
    a=create(MAX1);
    printf("Enter elements for second array:\n\n");
    b=create(MAX2);
    sort(a,MAX1);
    sort(b,MAX2);

    printf("First array :\n");
    display(a,MAX1);
    printf("Second array:\n");
    display(b,MAX2);
    printf("After Merging:\n");
    c=merge(a,b);
    display(c, MAX1 + MAX2);
    return 0;
}
int* create(int size){
    int *arr,i;
    arr = (int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++)
    {
        printf("Enter The Element No. %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    return arr;
}
void sort(int *arr, int size){
    int i,temp,j;
    for( i=0; i<size; i++){
        for( j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void display(int *arr, int size)
{
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
        printf("\n");
    }
}
int *merge(int *a, int *b){
    int *arr;
    int i,j,k;
    int size= MAX1 + MAX2;
    arr=(int *)malloc(sizeof(int)*(size));
    for(k=0,j=0,i=0;i<=size;i++){
        if(a[k]<b[j])
        {
            arr[i]=a[k];
            k++;
            if(k>=MAX1){
                for(i++; j<MAX2; j++,i++)
                arr[i]=b[j];
            }
        }else{
            arr[i]=b[j];
            j++;
            if(j>=MAX2)
            {
                for(i++;k<MAX1;k++,i++)
                arr[i]=a[k];
            }
        }
    }
    return arr;
}