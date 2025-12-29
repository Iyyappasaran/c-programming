// Sorting the participants and their weights in ascending order using structures.
#include <stdio.h>
#include <stdlib.h>

struct info{
    char name[20];
    int weight;
};;

void sortorder(struct info p[],int n){
    for(int i=0;i<n-1;i++){
            struct info temp;
        for(int j=0;j<n-i-1;j++){
           if(p[j].weight>p[j+1].weight){
            temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
           }
        }
    }
    for(int i=0;i<n;i++){
        printf("%s %d\n",p[i].name,p[i].weight);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    struct info p[n];
    for(int i=0;i<n;i++){
        scanf("%s %d",p[i].name,&p[i].weight);
    }
    sortorder(p,n);
    return 0;
}

