/*
ij ij ij ij 
00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33
*/
#include<stdio.h>
int main(){
    int n;
    printf("input the the matrix size \n");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("enter i %d, enter j %d\n",i,j);
                scanf("%d",&arr[i][j]);
        }
    }


     printf("now printing the array elements\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
            printf("\n");
            
    }
    printf("\n");
    }
    printf("now printing the left diag\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            printf("%d ",arr[i][j]);
            }
            
    }
    }


     printf("now printing the rigth diag\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
            printf("%d ",arr[i][j]);
            }
            
    }
    }



    return 0;
}
