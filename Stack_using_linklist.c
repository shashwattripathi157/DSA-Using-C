#include<stdio.h>
#include<malloc.h>
struct node{
    int info;
    struct node *next;
}*top=NULL;
void push(int val){
    struct node *temp;
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
        printf("list is underflow");
        else{
            temp=top;
            top=top->next;
            free(temp);
        }
        printf("pop funct");
}
void display(){
    struct node*temp;
    if(top==NULL)
       printf("Underflow");
       else{
           temp=top;
           while(temp!=NULL){
               printf(" %d ",temp->info);
               temp=temp->next;
           }
           printf("display");
       }
}


int main(){
    int ch;
    do{
        printf("\n1.push\n2.dis\n3.pop\n4.exit");
        scanf("%d",&ch);
        switch(ch){
               case 1:
               int val;
               printf("enter a val");
               scanf("%d",&val);
               push(val);
               break;

              case 2:
              display();
              printf("hello world");
              break;


              case 3:
              pop();
              printf("pop");
              break;


              default:
                printf("exit");
        }  
    }while(ch<=3);


    return 0;

}