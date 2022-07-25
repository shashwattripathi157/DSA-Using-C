/*
simple linked list
|      |
|______|


*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data; 
    struct node *next;
};
struct node *head = NULL;
void main(){
    int choice, data;
    while(1){
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert after a node\n4. Delete at beginning\n5. Delete at end\n6. Delete after a node\n7. Display\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                insert_beg(data);
                break;
            case 2:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                insert_end(data);
                break;
            case 3:
                printf("Enter the element to be inserted: ");
                scanf("%d", &data);
                printf("Enter the element after which to insert: ");
                scanf("%d", &data);
                insert_after(data);
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                printf("Enter the element after which to delete: ");
                scanf("%d", &data);
                delete_after(data);
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
}
void insert_beg(int data){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;
}
void insert_end(int data){
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
void insert_after(int data){
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
        if(p->data == data){
            temp->next = p->next;
            p->next = temp;
            return;
        }
        p = p->next;
    }
    printf("%d not present in the list\n", data);
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
void delete_after(int data){
    struct node *temp, *p;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    p = head;
    while(p->next != NULL){
        if(p->data == data){
            temp = p->next;
            p->next = temp->next;
            free(temp);
            return;
        }
        p = p->next;
    }
    printf("%d not present in the list\n", data);
}
void display(){
    struct node *p;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    p = head;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

