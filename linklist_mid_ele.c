/*
mid ele in linklist
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int val){
    struct node *temp=NULL;
    temp=malloc(sizeof(temp));
    temp->data=val;
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
        printf("list is empty\n");
    }
    else{
        struct  node *p=top;
        while (p!=NULL){
            printf("%d\n",p->data);
            p=p->next;
        }
    }
}
void midd(){
    struct node *slow=top;
    struct node *fast=top;
    if(top==NULL){
        printf("the list is empty");
    }
    while (fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("the middle element is %d\n",slow->data);
}
void summ(){
    int sum=0;
    struct node *p=top;
    if(top==NULL){
        printf("Enmty\n");
    }
    else{
        while (p!=NULL){
            sum=sum+p->data;
            p=p->next;
        }
    }
    printf("sum=%d\n",sum);
}
int main(){
    
    int ch;
    
    do{
        printf("\npush..1\nmidd..2\nsumm..3\ndisp..4");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                int var;
                printf("user enter a value");
                scanf("%d",&var);
               push(var);
                break;
            case 2:
                midd();
                break;
            case 3:
                summ();
                break;
            case 4:
              display();
                break;
            default:
            printf("error in input");
            
    }
}while(ch<=4);
return 0;
}

