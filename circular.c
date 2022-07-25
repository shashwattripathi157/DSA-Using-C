/*
addition at beginning circular linked list
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data; 
    struct node *next;
};
struct node *head = NULL;
void add_beg(int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}
void add_end(int data){
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = temp;
}
void add_after(int data, int data1){
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    p = head;
    while(p->next != NULL){
        if(p->data == data1){
            temp->next = p->next;
            p->next = temp;
            return;
        }
        p = p->next;
    }
    printf("%d not present in the list\n", data1);
}
void delete_beg(){
    struct node *temp;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
}
void delete_end(){
    struct node *temp, *p;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    if(head->next == NULL){
        free(head);
        head = NULL;
        return;
    }
    p = head;
    while(p->next->next != NULL){
        p = p->next;
    }
    temp = p->next;
    p->next = NULL;
    free(temp);
}
