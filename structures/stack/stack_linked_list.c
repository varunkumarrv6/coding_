#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *addr;
};
void push(struct node **t,int val){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    if(q==NULL){
        printf("Out of memory\n");
        return;
    }
    q->data=val;
    q->addr=*t;
    *t=q;
}
/* Returns 1 and stores the popped value in *item, or returns 0 if the stack is empty. */
int pop(struct node **t,int *item){
    struct node *q;
    if(*t==NULL){
        printf("Stack is empty\n");
        return 0;
    }
    q=*t;
    *item=q->data;
    *t=q->addr;
    free(q);
    return 1;
}
int main(){
    int item;
    struct node *top;
    top=NULL;
    int val;
    for(int i=0;i<5;i++){
        printf("value");
        scanf("%d",&val);
        push(&top,val);
    }
    if(pop(&top,&item))
        printf("%d",item);
}
