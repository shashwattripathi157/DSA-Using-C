/*
input an array and one element and find its frequency 
*/
#include<stdio.h>
int main(){
    int n;
    printf("User enter the max size of the array\n");
    scanf("%d",&n);
    int array[n];
    printf("now inputing the array\n");
    for(int i=0;i<n;i++){
        printf("Enter %d element\n",i+1);
        scanf("%d",&array[i]);
    }
    input_array(array,n);
return 0;
}
void input_array(int array[],int n){
    int src;
    printf("now displaying the array\n");
    for(int i=0;i<n;i++){
        printf("the %d element is=%d\n",i+1,array[i]);
    }
    printf("user please enter an elemnet to scearch in array\n");
    scanf("%d",&src);
    printf("now searching the array\n");
    for(int i=0;i<n;i++){
        if(array[i]==src){
            printf("the element was found at %d",i);
            break;
        }     
    }
    printf("the element was not found\n");
}