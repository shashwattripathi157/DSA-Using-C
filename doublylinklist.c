#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
struct node *prev=NULL;
struct node *next=NULL;

void insert(int var){

    struct node *temp;
    temp=malloc(sizeof(struct node));

    temp->data=var;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL){
        head=temp;
    }
    

