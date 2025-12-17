// finds the rightnearest which has common greatest common factor and find its 1-index value
#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,(a%b));
}

int findnearest(int arr[5],int n,int current,int next){
    if(next>=n){
        return -1; //base case
    }
    if(gcd(arr[current],arr[next])>1){
        return next+1; //recursive case
    }
    return findnearest(arr,n,current,next+1);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int result = findnearest(arr,n,i,i+1);
        printf("%d ",result);
    }
    return 0;
}
