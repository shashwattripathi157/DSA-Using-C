/*
input an array and find the largest element;
43 23 22 56 77
0  1  2  3  4 
temp=[0]


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
    largest(array,n);
return 0;
}
void largest(int array[],int n){
    printf("now displaying the elements in the array\n");
        for(int i=0;i<n;i++){
            printf("the %d element is=%d\n",i+1,array[i]);
        }
    printf("now displaying the largest elements in the array\n");
    int temp=array[0];
    int pos=0;
    for(int i=0;i<n;i++){
        if(array[i]>temp){
            temp=array[i];
            pos=i+1;
        }
    }
    printf("the largest element is=%d and was found at %d",temp,pos);
}