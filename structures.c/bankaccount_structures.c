// To find the customers with balance less than 200 and provide interest for more than 1000.
#include <stdio.h>
#include <stdlib.h>

struct Customer{
    char name[20];
    int num;
    float bal;
};

void lessbalance(struct Customer c[],int n){
    printf("Customers with balance less than Rs.200: ");
    for(int i=0;i<n;i++){
        if(c[i].bal<200){
            printf("%s ",c[i].name);
        }
    }
}

void updatedbalance(struct Customer c[],int n){
    for(int i=0;i<n;i++){
        if(c[i].bal>1000){
            c[i].bal += c[i].bal*0.03;
            printf("\nUpdated balance of %s: Rs. %.2f",c[i].name,c[i].bal);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    struct Customer c[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %f",c[i].name,&c[i].num,&c[i].bal);
    }
    lessbalance(c,n);
    updatedbalance(c,n);
    return 0;
}
