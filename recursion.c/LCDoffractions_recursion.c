// Coverting fractions to Equivalent forms of LCD using recursion.
#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b){
    if(b==0)          //base case
        return a;
    return gcd(b,a%b);
}

int lcm(int a,int b){     //Function to compute LCD
    return (a*b)/gcd(a,b);
}

int main(){
    int n1;
    int d1;
    int n2;
    int d2;
    scanf("%d %d %d %d",&n1,&d1,&n2,&d2);
    int lcd = lcm(d1,d2);
    int num1 = n1*(lcd/d1);
    int num2 = n2*(lcd/d2);
    int result_num = num1+num2;
    int result_den = lcd;

    int g = gcd(result_num,result_den);
    result_num /= g;
    result_den /= g;
    printf("The resulting fraction is %d/%d",result_num,result_den);
    return 0;
}
