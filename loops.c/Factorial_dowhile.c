// Using do while loop to factorial of n.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=1,n,fact=1;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    do{
        fact = fact*i;
        i++;
    }
    while(i<=n);
    printf("Factorial: %d",fact);
    printf("%d",i);


  return 0;
}
