// Practicing using calloc.
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student *p = calloc(n,sizeof(struct Student));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Default Student Records:\n");
    for(int i=0;i<n;i++){
        printf("ID: %d Name: %s Marks: %d\n",
               p[i].id,
               p[i].name,
               p[i].marks);
    }
    free(p);
    return 0;
}
