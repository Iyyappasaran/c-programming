// To find the number of perfect divisors for the digit n and display perfect divisors,divisors.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void divisors(int n,int i){
    if(i>n)
        return;
    if(n%i==0){
        printf("%d ",i);
    }
    divisors(n,i+1);
}

void perfectdivisors(int n,int i){
    if(i>n)
        return;
    if(n%i==0){
        int root = (int)sqrt(i);
        if(root*root==i)
            printf("%d ",i);
    }
    perfectdivisors(n,i+1);
}

int numberofperfect(int n,int i){
    if(i>n)
        return 0;
    if(n%i==0){
        int root =(int)sqrt(i);
        if(root*root==i){
        return 1+ numberofperfect(n,i+1);
        }
    }
    return numberofperfect(n,i+1);
}

int main(){
    int n;
    scanf("%d",&n);
    divisors(n,1);
    printf("\n");
    perfectdivisors(n,1);
    printf("\n");
    int result = numberofperfect(n,1);
    printf("%d",result);
    return 0;
}
