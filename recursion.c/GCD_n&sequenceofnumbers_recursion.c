// To determine the GCD between n and each number in a sequence.
#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        int g = gcd(n,arr[i]);
        if(g>1){
            printf("%d",g);
        }
        else{
            printf("-1");
        }
        printf(" ");
    }
    return 0;
}
