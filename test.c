#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int var){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=var;
    temp->next=NULL;
    if(top==NULL){
        top=temp;
    }
    else{
        temp->next=top;
        top=temp;
    }
}
void display(){
    if(top==NULL){
        
    }
}




