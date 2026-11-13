/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *addr;
};
int push(struct node **t,int val){
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=val;
    q->addr=*t;
    *t=q;


}
int pop(struct node **t){
   int item;
   struct node *q;
   if(*t==NULL)
   printf("Stack is empyth\n");
   else
   {
       q=*t;
       item=q->data;
       *t=q->addr;
       free(q);
       return(item);


   }

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
  item= pop(&top);
  printf("%d",item);
}
