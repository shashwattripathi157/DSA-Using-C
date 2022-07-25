/*
Q1.Write a C Program to store N elements to an array and then send all positive elements of the array to  
 the end without altering the original sequence.
            
*/
#include<stdio.h>
void input(int n){
    int arr[n];
    printf("user enter the array elements\n");
    for(int i =0;i<n;i++){
        printf("enter %d elements\n",i+1);
        scanf("%d",&arr[i]);
    }
    swap(n,arr);
}
void swap(int n, int arr[]){
    int j=0;
    int temp;
    printf("the array elements are\n");
    for(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("now swapping \n");
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            if(i!=j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }
    printf("the swap elements are \n");
    for(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
}
int main(){
    int n;
    printf("user enter the max size of array\n");
    scanf("%d",&n);
    input(n);
    return 0;
}