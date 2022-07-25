#include<stdio.h>
struct node {
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int x){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node *temp=top;
    top=top->next;
    free(temp);
}
void display(){
    if(top==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node *temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int x,n;
    printf("Enter the number of elements to be pushed\n");
    return 0;
}
