#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* left;
   struct node* right;
};
struct node* newnode(int data){
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}


void print_in_postorder(struct node* node){
    if(node==NULL){
        return;
    }
    print_in_postorder(node->left);
    print_in_postorder(node->right);
    printf("%d",node->data);
}
void print_in_inorder(struct node* node){
    if(node==NULL){
        return;
    }
    print_in_inorder(node->left);
    printf("%d",node->data);
    print_in_inorder(node->right);
}
void print_in_preorder(struct node* node){
    if(node==NULL){
        return;
    }
    printf("%d",node->data);
    print_in_preorder(node->left);
    print_in_postorder(node->right);
}
int main(){
    struct node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);
    print_in_inorder(root);
    printf("\n");
    print_in_postorder(root);
    printf("\n");
    print_in_preorder(root);
    return 0;
}
 
         /*
                 1
                / \
               2   3
              / \
             4   5


         
         
         
         
         
         */