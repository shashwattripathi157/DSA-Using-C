#include<stdio.h>
struct node{
    int data;
    struct node *next;
};struct node *top=NULL;
void push(int val){
    struct node *temp;
    temp=malloc(sizeof(struct node));
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
void del(){
    struct node *temp;
    if(top==NULL){
        printf("nothing to delete \n");
    }
    else{
        temp=top;
        top=top->next;
        printf("the deleated element is %d",temp->data);
        free(temp);
    }
}
void disp(){
    struct node *temp;
    if(top==NULL){
        printf("stack underflow \n");
    }
    else{
        temp=top;
        while (temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
    int ch;
    do{
        printf("\n1....push\n2....pop\n3....disp\n4....exit");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
               int val;
               printf("enter the val\n");
               scanf("%d",&val);
               push(val);
               break;
        case 2:
               del();
            break;
        case 3:
               disp();
            break;

        
        default:
            printf("wrong choice");
        }
    }while(ch<=3);

    return 0;

}