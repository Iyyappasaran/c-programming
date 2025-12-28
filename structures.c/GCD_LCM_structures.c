// Calculate the GCD and LCM of two numbers usingg structures.
#include <stdio.h>
#include <stdlib.h>

struct GCD_LCM{
    int a;
    int b;
};

int GCD(int a,int b){
    if(b==0)
        return a; // base case
    return GCD(b,a%b);
}

void LCM(struct GCD_LCM n){
    int g = GCD(n.a,n.b);
    int l = (n.a*n.b)/g;
    printf("GCD: %d",g);
    printf("\nLCM: %d",l);
}

int main(){
    struct GCD_LCM n;
    scanf("%d %d",&n.a,&n.b);
    LCM(n);
    return 0;
}
