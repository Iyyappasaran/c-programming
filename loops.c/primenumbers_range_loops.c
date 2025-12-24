// To find the prime numbers between a range.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int l,r,j,i,prime;
    scanf("%d",&l);
    scanf("%d",&r);
     for(i=l;i<=r;i++){
         prime =1;
        for(j=2;j<i;j++){
                if(i%j ==0){
                prime = 0;
                break;
             }
            }
            if(prime){
               printf("%d ",i);
               }
        }
    return 0;
}
