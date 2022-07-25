/*
  
*/

#include<stdio.h>
#include<malloc.h>
int stack[5];
int top=-1;

void push(int var){
    if(top==4){
        printf("the stack is overflow");
    }
    else{
        top++;
        stack[top]=var;
    }
}
void display(){
    if(top==-1){
        printf("the stack is underflow");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
    }
}
void pop(){
    if(top==-1){
        printf("the stack is underflow");
    }
    else{
        
        int p=stack[top];
        
        top=top-1;
        printf("the deleated element is %d\n",p);
    }
}
int main(){
    int ch;
    
    do{
        printf("\npush..1\ndisplay..2");
        scanf("%d",&ch);
        switch(ch){
           // case 1:
                int var;
                printf("user enter a value");
                scanf("%d",&var);
              //  push(var);
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            default:
            printf("error in input");
            
    }
}while(ch>=3);
return 0;
}