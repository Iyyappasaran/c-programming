// Adding two matrixes using void function.
#include <stdio.h>
#include <stdlib.h>

void addmatrix(int arr[10][10],int arr2[10][10],int result[10][10],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
}

int main(){
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int arr[10][10],arr2[10][10],result[10][10];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    addmatrix(arr,arr2,result,rows,cols);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
