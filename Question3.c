/*
Write a C program to find union (of two linked lists) based on their information field
that implements singly linked list (with information field Emp_Id and Name of employee for each node ).
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data; 
    struct node *next;
};
struct node *top = NULL;
struct node *top2=NULL;
struct node *unio=NULL;

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
void push(int var){
    struct node*temp=malloc(sizeof(struct node));
    temp->data=var;
    temp->next=NULL;
    if(top2==NULL){
        top2=temp;
    }
    else{
        temp->next=top2;
        top2=temp;
    }
}
void uni()

int main(){
    int ch;
    
    do{
        printf("\npush..1\ndisplay..2");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                int var;
                printf("user enter a value");
                scanf("%d",&var);
               push(var);
                break;
            case 2:
                display();
                break;
            default:
            printf("error in input");
            
    }
}while(ch<=2);
return 0;
}






