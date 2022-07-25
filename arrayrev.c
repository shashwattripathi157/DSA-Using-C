#include<stdio.h>
#include<stdlib.h>
int main(){
    int *array=NULL,size;
  
    printf("enter size of array");
    scanf("%d",&size);

    array=malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
      printf("enter %d element\n",i+1);
      scanf("%d",(array+i));
    }
  
    printf("the first array is \n");
    
    for(int i=0;i<size;i++){
      printf("%d\n",*(array+i));
    }
        printf("the first array in reverce \n");

    for(int i=size-1;i>=0;i--){
      printf("%d\n",*(array+i));
    }

    return 0;
}
