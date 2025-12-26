// To find wheteher the two numbers are Amicable.
#include <stdio.h>
#include <stdlib.h>

int properdivisors(int n,int i){
    if(i==n)
        return 0;
    if(n%i==0){
        return i+properdivisors(n,i+1);
    }
    return properdivisors(n,i+1);

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum1 = properdivisors(a,1);
    int sum2 = properdivisors(b,1);
    if(sum1==b && sum2==a)
        printf("Yes,The numbers are Amicable");
    else
        printf("No,The numbers are not Amicable");
    return 0;
}
