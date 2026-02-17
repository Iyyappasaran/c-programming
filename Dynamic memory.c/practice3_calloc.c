// Digit frequency counter using calloc.
#include <stdio.h>
#include <stdlib.h>

void digit_freq(int *freq,int n){
    int temp;
    if(n==0){
        freq[0]++;
    }
    while(n>0){
        temp = n%10;
        n /=10;
        freq[temp]++;
    }
}

int main(){
    int *freq = calloc(10,sizeof(int));
    if(freq==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(n<0){
        n = -n;
    }
    digit_freq(freq,n);
    printf("Digit frequency:\n");
    for(int i=0;i<10;i++){
        printf("%d -> %d\n",i,freq[i]);
    }
    free(freq);
    return 0;
}
