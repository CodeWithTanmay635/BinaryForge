#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*nxt;
};
void transversal(struct node*ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->nxt;
    }
}
int main(){
    /* data */
    
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    struct node*fifth;
    struct node*sixth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    sixth=(struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->nxt = second;
    head->nxt = third;

    second->data = 2;
    second->nxt = third;

    third->data = 44;
    third->nxt = fourth;
    
    
    fourth->data = 77;
    fourth->nxt = fifth;

   fifth->data = 455;
   fifth->nxt = sixth;

    sixth->data = 100;
    sixth->nxt = NULL;

    transversal(head);

    return 0;

}
