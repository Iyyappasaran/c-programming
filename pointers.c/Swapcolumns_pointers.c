// Swap the first and last column of a 2D array using double pointers.
#include <stdio.h>
#include <stdlib.h>

void swapcolumns(int **arr,int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<1;j++){
            temp = arr[i][j];
            arr[i][j] = arr[i][n-1];
            arr[i][n-1] = temp;
        }
    }
}
void printmatrix(int **arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int **arr= NULL;
    arr = (int**)malloc(n* sizeof(int*)); //memory allocation for rows.
    for(int i=0;i<n;i++){
    arr[i] = (int*)malloc(n* sizeof(int));  //memory allocation for columns.
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    swapcolumns(arr,n);
    printmatrix(arr,n);
    return 0;
}

