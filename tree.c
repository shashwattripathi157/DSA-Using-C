#include<stdio.h>
#include<stdlib.h>
struct tree{
            int data;
            struct  tree *right;
            struct tree *left;
};
struct tree *newtree=NULL;

struct tree *newnode(int var){
    struct tree *node;
    node=malloc(sizeof(struct tree));
    node->data=var;
    node->left=NULL;
    node->right=NULL;
  return(node);
}
void pre_order(struct tree *node){
    if(node==NULL){
        return;
    }
        printf("%d\n",node->data);
        pre_order(node->left);
        pre_order(node->right);
}
void in_order(struct tree *node){
    if(node==NULL){
        return;
    }
    in_order(node->left);
    printf("%d\n",node->data);
    in_order(node->right);
}
void post_order(struct tree *node){
    if(node==NULL){
        return;
    }
    post_order(node->left);
    post_order(node->right);
    printf("%d\n",node->data);
    
}
int totalnode(struct tree *node){
    if(node==NULL){
        return 0;
    }
    int l=left_hight(node);
    int r=right_hight(node);
    return 1+totalnode(node->left)+totalnode(node->right);
}
int left_hight(struct tree *node){
    int count;
    while (node)
    {
        count++;
        node=node->left;

    }
    return count;
}
int right_hight(struct tree *node){
    int count;
    while (node)
    {
        count++;
        node=node->right;

    }
    return count;
}
int main(){
    struct tree *node;
    node=newnode(1);
    node->left=newnode(2);
    node->right=newnode(3);
    node->left->left=newnode(4);
    node->left->right=newnode(5);
    node->right->right=newnode(6);
    node->right->left=newnode(7);
    printf("pre_order\n ");
    pre_order(node);
    printf("post_order\n ");
    post_order(node);
    printf("in_order\n ");
    in_order(node);
    printf("\n=============\ntotal number of node is :%d\n",totalnode(node));
    return 0;
}