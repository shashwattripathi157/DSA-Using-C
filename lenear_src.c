/*
lenear scearch;
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
    lenear(array,n);
return 0;
}
void lenear(int array[],int n){
    printf("now displaying the elements in the array\n");
        for(int i=0;i<n;i++){
            printf("the %d element is=%d\n",i+1,array[i]);
        }
    printf("now executing lenear scearch\n");
    int src;
    int c=0,pos;
    printf("user enter a scearching numebr\n");
    scanf("%d",&src);
        for(int i=0;i<n;i++){
            if(array[i]==src){
                c++;
                pos=i+1;
                break;
            }
        }
    if(c==1){
        printf("the elemnt was found at pos=%d\n",pos);
    }
    else
        printf("the element was not found\n");
}