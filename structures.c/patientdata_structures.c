// Gender count and Patients older than 40 using structures.
#include <stdio.h>
#include <stdlib.h>

struct patient{
    int id;
    char name[20];
    int gender;
    int age;
};

void printgender(struct patient p[],int n){
int male=0,female=0;
for(int i=0;i<n;i++){
    if(p[i].gender==1){
        male++;
    }
    if(p[i].gender==2){
        female++;
    }
}
    printf("Count: %d %d",male,female);
}


void printage(struct patient p[],int n){
    printf("\nAbove 40: ");
    int found =0;
    for(int i=0;i<n;i++){
        if(p[i].age>40){
            printf("%s ",p[i].name);
            found =1;
      }
    }
    if(!found)
        printf("0");
}

int main(){
    int n;
    scanf("%d",&n);
    struct patient p[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d",&p[i].id,&p[i].name,&p[i].gender,&p[i].age);
    }
    printgender(p,n);
    printage(p,n);
    return 0;
}
