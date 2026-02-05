// Read data for 3 cars and print the cars that satisfy condition using Nested structures
#include <stdio.h>
#include <stdlib.h>

struct Engine{
    int horsepower;
    float capacity;
};

struct Car{
    char name[20];
    struct Engine e;
};

int main(){
    int x = 3;
    struct Car n[x];
    for(int i=0;i<x;i++){
        scanf("%19s",n[i].name);
        scanf("%d",&n[i].e.horsepower);
        scanf("%f",&n[i].e.capacity);
    }
    printf("\n");
    for(int i=0;i<x;i++){
    if(n[i].e.horsepower>150){
        printf("%s %d %.1f\n"
               ,n[i].name
               ,n[i].e.horsepower
               ,n[i].e.capacity);
    }
    }
    return 0;
}
