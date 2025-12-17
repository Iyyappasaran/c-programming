// Digital roots using nested while loops.
#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,sum,steps =0;
    scanf("%d",&n);
    while(n>=10){
        sum = 0;  // reset sum before starting loop.
        while(n>0){
        sum += n%10;
        n /= 10;
        }
        n = sum;
        steps++;
    }
    printf("Digital Root: %d\nNumber of steps: %d",n,steps);
    return 0;
}
