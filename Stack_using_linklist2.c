#include<stdio.h>
#include<malloc.h>
struct node{
    int info;
    struct node*next;
}*top=NULL;

void push(int val){
    struct node*temp;
    temp=malloc(sizeof(struct node));
    temp->info=val;
    temp->next=NULL;
    if(top==NULL)
        top=temp;
    else{
        temp->next=top;
        top=temp;
    }
}
void pop(){
    struct node*temp;
    if(top==NULL)
        printf("Underflow");
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}
void disp(){
    struct node*temp;
    if(top==NULL)
        printf("Underflow");
        else{
            temp=top;
            while(temp!=NULL){
                printf(" %d ",temp->info);
                temp=temp->next;
            }

        }
}
int main(){
    int ch;
    do{
    printf("\n1.ins\n2.pop\n3.disp");
    scanf("%d",&ch);
     switch (ch){

     case 1:
     int val;
     printf("enter a val");
     scanf("%d",&val);
     push(val);
     break;

     case 2:
     pop();
     break;

     case 3:
     disp();
     break;

     default:
     printf("error");
     }
}while(ch<=3);
return 0;
}