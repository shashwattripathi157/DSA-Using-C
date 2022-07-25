/*

*/
#include<stdio.h>
#include<malloc.h>
struct node
{
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
        printf("list is empty\n");
    }
    else{
        struct  node *p=top;
        while (p!=NULL){
            printf("%d",p->data);
            p=p->next;
        }
    }
}
int main(){
    int ch;33
    
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

