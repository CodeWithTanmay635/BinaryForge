#include<stdio.h>
#include<windows.h>

#define MAX 5

void insert(int* , int pos, int num);
void del(int*, int pos);
void reverse(int*);
void display(int*);
void search(int*, int num);
int main()
{
    int arr[5];
    system("cls");
    insert(arr,1,11);
    insert(arr,2,12);
    insert(arr,3,13);
    insert(arr,4,14);
    insert(arr,5,15);
    printf("Elements of Array :\n");
    display(arr);
    del(arr,5);
    del(arr,2);
    printf("after deletion:\n");
    display(arr);
    insert(arr,2,222);
    insert(arr,5,555);
    printf("After insertion:\n");
    display(arr);
    reverse(arr);
    printf("After Reversing:\n");
    display(arr);
    search(arr,222);
    search(arr,666);

    

    return 0;
}
void insert(int *arr, int pos, int num){
    int i;
    for(i=MAX-1; i>=pos; i--){
        arr[i]=arr[i-1];
        arr[i]=num;
    }
}
void del(int *arr, int pos){

int i;
for(i=pos; i<MAX; i++){
    arr[i-1]=arr[i];
    arr[i-1]=0;
}
}
void reverse(int *arr){
    int i;
    for(i=0; i<MAX/2; i++){
        int temp=arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;
    }

}

void search(int *arr, int num){
int i;
for(i=0; i<MAX; i++){
    if(arr[i]==num){
        printf("The element %d is present at %dth position.\n\n",num,i+1);
        return;
    }
}
if(i==MAX)
printf("The Element %d is not present in the array.\n\n",num);
}


void display(int *arr){
  int i;
  for(i=0; i<MAX; i++)
  printf("%d\t",arr[i]);
  printf("\n");

}