#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void insert(int val){
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(front==NULL){
        front=temp;
        rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
void del(){
    struct node *temp;
    if(front==NULL){
        printf("empty\n");
    }
    else{
        temp=front;
        printf("deleated is %d",temp->data);
        if(front==rear){
            front=rear=NULL;
        }
         else{
                front=front->next;
            }
            free(temp);
    }
}
void disp(){
     struct node *temp;
    if(front==NULL){
        printf("empty\n");
    }
    else{
        temp=front;
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
               insert(val);
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