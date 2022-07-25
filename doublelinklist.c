/*
implementat doubel linked list using c
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *next;
}nodetype;

nodetype *insert(nodetype *);
void count(nodetype *);
void disp(nodetype *);
int main(){
    nodetype *l=NULL, *r=NULL;
    int ch;
    do{
        printf("\n1.insert\n2.count\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                r=insert(r);
                if(l==NULL){
                    l=r;
                }
                break;
            case 2:
                if(l==NULL){
                    printf("\nlist is empty\n");
                }
                else{
                    count(l);
                }
                break;
            case 3:
                if(l==NULL){
                    printf("\nlist is empty\n");
                }
                else{
                    disp(l);
                }
                break;
        }
    }while(ch!=4);
}
nodetype *insert(nodetype *r){
    nodetype *p;
    p=(nodetype *)malloc(sizeof(nodetype));
    printf("\n enter data");
    scanf("%d",&p->data);
    if(r==NULL){
        p->next=NULL;
    }
    else{
        p->next=r;
    }
    return p;
    
}
void count(nodetype *l){
    int c=0;
    while(l!=NULL){
        c++;
        l=l->next;
    }
    printf("\ncount is %d",c);
}
void disp(nodetype *l, nodetype *r){
    while(l!=r){
        printf("\n%d",l->data);
        l=l->next;
    }
    printf("\n%d",l->data);
}

