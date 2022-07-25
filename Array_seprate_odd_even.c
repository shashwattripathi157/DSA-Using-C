/*
 write a program to input elements in a array and seprate even and odd into respective array
*/
#include<stdio.h>
int main(){
int n;
printf("enter the size of the array \n");
scanf("%d",&n);
int array[n];
insert_array_even(n,array);
return 0;
}
void insert_array_even(int n,int array[]){
  for(int i =0;i<n;i++){
        printf("enter %d array elements\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("the inserted array elements are \n");
     for(int i =0;i<n;i++){
        printf("%d array elements is %d\n",i+1,array[i]);
    } 
    int even[n];
    printf("the array of even elements\n");
     for(int i =0;i<n;i++){
        if(array[i]%2==0){
            even[i]=array[i];
            
        }
    }
      printf("the even array is \n");
     for(int i =0;i<n;i++){
        printf("%d array elements is %d\n",i+1,even[i]);
    } 
}