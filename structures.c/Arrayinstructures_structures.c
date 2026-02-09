// Store 5 books and prints book with price > 500.
#include <stdio.h>
#include <stdlib.h>

struct Book{
    int id;
    char title[30];
    float price;
};

void printbook(struct Book s[],int n){
    printf("Books with price greater than 500:\n");
    for(int i=0;i<n;i++){
        if(s[i].price>500){
            printf("%d %s %.2f\n",
                   s[i].id,
                   s[i].title,
                   s[i].price);
        }
    }
}

int main(){
    struct Book s[5];
    for(int i=0;i<5;i++){
        scanf("%d",&s[i].id);
        scanf("%29s",s[i].title);
        scanf("%f",&s[i].price);
    }
    printf("\n");
    printbook(s,5);
    return 0;
}
