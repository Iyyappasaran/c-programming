// Do operations in the library with the help of pointers
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int q;
    scanf("%d",&n);
    scanf("%d",&q);
    int **shelves = malloc(n*sizeof(int*));
    int *sizes = malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        shelves[i] = NULL;
        sizes[i] = 0;
    }
    int type;
    int x,y;
    while(q--){
        scanf("%d",&type);
        if(type==1){
            scanf("%d %d",&x,&y);
            sizes[x]++;
            shelves[x] = realloc(shelves[x],sizes[x]*sizeof(int));
            shelves[x][sizes[x]-1]=y;
        }
        if(type==2){
            int x,y;
            scanf("%d %d",&x,&y);
            printf("%d\n",shelves[x][y]);
        }
        if(type==3){
            int x;
            scanf("%d",&x);
            printf("%d\n",sizes[x]);
        }
    }
    for(int i=0;i<n;i++){
        free(shelves[i]);
    }
    free(shelves);
    free(sizes);
    return 0;
}
