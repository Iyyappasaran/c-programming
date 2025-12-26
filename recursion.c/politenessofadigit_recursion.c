//  To find the politeness of a number.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int n,int p){
    if(n%p!=0)       //base case
        return 0;
    return 1+power(n/p,p);
}

int politeness(int n,int factor){
    if(factor>n)  //base case
        return 1;
    if(n%factor==0 && factor%2==1){
        int sum = power(n,factor);
        int reduced_n = n;
        for(int i=0;i<sum;i++){
            reduced_n /= factor;
        }
        return (sum+1)*politeness(reduced_n,factor+1);
    }
        return politeness(n,factor+1);
}

int main(){
    int n;
    scanf("%d",&n);
    int result = politeness(n,2)-1;
    printf("The politeness of the number is %d",result);
    return 0;
}
