// Read Student records from file and Display it
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

int main(){
    struct Student p;
    FILE *fp;
    fp = fopen("students.txt","r");
    if(fp==NULL){
        printf("File cannot be opened\n");
        return 1;
    }
    printf("Student records from file:\n");
    while(fscanf(fp,"%d %19s %d",&p.id,p.name,&p.marks)==3){
        printf("%d %s %d\n",
               p.id,
               p.name,
               p.marks);
    }
    fclose(fp);
    return 0;
}
