/*
write a program to store n elements in an array, find the sum of odd and even elements;
*/
#include<stdio.h>

int main(){
int n;
printf("enter the size of the array \n");
scanf("%d",&n);
int array[n];
insert_array(n,array);
return 0;
}
void insert_array(int n,int array[]){
    for(int i =0;i<n;i++){
        printf("enter %d array elements\n",i+1);
        scanf("%d",&array[i]);
    }
    printf("the inserted array elements are \n");
     for(int i =0;i<n;i++){
        printf("%d array elements is %d\n",i+1,array[i]);
    }
    int sum=0;
    printf("the sum of even elements is\n");
     for(int i =0;i<n;i++){
        if(array[i]%2==0){
            sum=sum+array[i];
        }
    }
    printf("%d\n",sum);
     int sum2=0;
    printf("the sum of even elements is\n");
     for(int i =0;i<n;i++){
        if(array[i]%2!=0){
            sum2=sum2+array[i];
        }
    }
    printf("%d\n",sum2);
}


