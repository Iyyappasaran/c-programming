// To find whether the digit form an arithmetic sequence.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,temp,prev,curr,isArithmetic =1,diff;
    scanf("%d",&n);

    temp= n;
    prev = temp%10;
    temp /= 10;
    curr = temp%10;
    diff =  prev - curr;
    prev = curr;
    temp/=10;

    while(temp>0){
        curr = temp%10;
        if(prev-curr != diff){
            isArithmetic =0;
            break;

        }
        prev = curr;
        temp/=10;
    }
    if(isArithmetic)
        printf("The digits %d form an arithmetic sequence.",n);
    else
        printf("The digits %d does not form an arithmetic sequence.",n);



    return 0;
}
