// Calculate the number of ways to climb a staircase of n steps
#include <stdio.h>
#include <stdlib.h>

//Ways(0)=1;
//Ways(1)=1;
int Ways(int n){
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return Ways(n-1) + Ways(n-2);
}
// n=4;
// Ways(3) + Ways(2);
// Ways (3) = Ways(2) + Ways(1);
// Ways(2) = Ways(1) + Ways(0); => Ways(2) =  2;
// Ways(3)= 3;
// result = 3+2 = 5;

int main(){
    int n;
    scanf("%d",&n);
    int result = Ways(n);
    printf("The number of ways to climb the staircase was %d",result);
    return 0;
}
