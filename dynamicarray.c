#include<stdio.h>
#include<stdlib.h>
int main(){

    int *arr=NULL,size;
    printf("enter size of array");
    scanf("%d",&size);
    arr=malloc(size*sizeof(int));
    
    for(int i=0;i<size;i++){
        printf("%d enter \n",i+1);
        scanf("%d",(arr+i));
    }    

    for(int i=size;i>-1;i--){
        printf("%d\n",*(arr+i));
        }
    

    return 0;
}