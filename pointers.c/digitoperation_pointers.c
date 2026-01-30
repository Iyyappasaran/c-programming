// Find the sum of highest and lowest digit using pointers.
#include <stdio.h>
#include <stdlib.h>

void sumofdigits(int *n,int *max,int *min){
    int temp;
    while(*n>0){
        temp = *n%10;
        if(temp>*max){
            *max = temp;
        }
        if(temp<*min){
            *min = temp;
        }
        *n /=10;
    }
    int sum =0;
    sum = *max + *min;
    printf("Sum: %d",sum);
}

int main(){
    int n;
    scanf("%d",&n);
    if(n<=1000){
        printf("Invalid input");
        return 0;
    }
    int *p = &n;
    int max =0;
    int min =9;
    sumofdigits(&n,&max,&min);
    return 0;
}
