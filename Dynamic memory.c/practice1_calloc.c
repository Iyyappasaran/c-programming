// Practicing using calloc
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = calloc(5,sizeof(int));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }
    free(p);
    return 0;
}
