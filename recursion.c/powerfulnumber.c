// finding a number is powerful or not using recursion.
#include <stdio.h>
#include <stdlib.h>

int isprime(int num,int i){
    if(num<=1)
        return 0;
    if(num<i*i)
        return 1;
    if(num%i==0)
        return 0;
    return isprime(num,i+1);
}

int primefactor(int n,int factor,int *ispowerful){
    if(factor>n)
        return 0;//base case
    if(n%factor==0 && isprime(factor,2))
        printf("Prime factor: %d, Square: %d\n",factor,factor*factor);
      if(n%(factor*factor)!=0){
        *ispowerful =0;
      }
    return primefactor(n,factor+1,ispowerful);
}

int main(){
    int n;
    scanf("%d",&n);
    int ispowerful = 1;
    primefactor(n,2,&ispowerful);
    if(ispowerful)
        printf("Yes");
    else
        printf("No");
    return 0;
}
