#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 


struct tree{
    int data;
    struct tree *left;
    struct tree *rigth;
};
struct tree *left=NULL;
struct tree *right=NULL;

struct tree* newnode(int key){
    struct tree *temp;
    temp=malloc(sizeof(struct tree));
    temp->data=key;
    temp->left=NULL;
    temp->rigth=NULL;
}
struct tree* insert(struct tree* tree ,int key){
    if(tree==NULL){
        return newnode(key);
    }
    if(key<tree->data){
        tree->left=insert(tree->left,key);
    }
    else if(key>tree->data){
        tree->rigth=insert(tree->rigth,key);
    }
    return tree;
}
bool scearch(struct tree* tree ,int key){
    if(tree==NULL||tree->data==key){
        return tree->data;
    }
    if(tree->data<key){
        return scearch(tree->rigth,key);
    }
    return(tree->left,key);
}
        int isbst(struct tree* tree){
            if(tree==NULL){
                return(1);
            }
            if(tree->rigth!=NULL&&tree->rigth->data<tree->data){
                return(0);
            }
            if(tree->left!=NULL&&tree->left->data>tree->data){
                return(0);
            }
            if(!isbst(tree->left)||!isbst(tree->rigth)){
                return 0;
            }
        return 1;
        }
int main(){
    struct tree* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    int key;
    printf("user entet a key to scearch\n");
    scanf("%d",&key);
   
    printf("the answer is %d \n",scearch(root,key));
    printf("is bst or not %d \n",isbst(root));


    
}


