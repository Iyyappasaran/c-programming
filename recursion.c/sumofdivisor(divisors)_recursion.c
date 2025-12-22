// Find divisors(d) of n anf find sum of divisors of d recursively
#include <stdio.h>
#include <stdlib.h>

int sumofdivisors(int x,int i){
    if(i>x)        //base case
        return 0;
    if(x%i==0)
        return i + sumofdivisors(x,i+1);
    else
        return sumofdivisors(x,i+1);
}

int processofdivisors(int n,int i){
    if(i>n)        //base case
        return 0;
    if(n%i==0){
        int sum = sumofdivisors(i,1);
        return sum + processofdivisors(n,i+1);
    }
    else{
        return processofdivisors(n,i+1);
    }
    }


int main(){
    int n;
    scanf("%d",&n);
    int result = processofdivisors(n,1);
    printf("Sum of the divisors is %d",result);
    return 0;
}
