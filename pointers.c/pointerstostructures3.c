// Dynamic memory with pointer structures.
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

void print_record(struct Student *p,int n){
    printf("Student Records:\n");
    for(int i=0;i<n;i++){
        printf("%d %s %d\n",
               (p+i)->id,
               (p+i)->name,
               (p+i)->marks);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    struct Student *p = malloc(n*sizeof(struct Student));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&p[i].id);
        scanf("%19s",p[i].name);
        scanf("%d",&p[i].marks);
    }
    print_record(p,n);
    free(p);
    p = NULL;
    return 0;
}

