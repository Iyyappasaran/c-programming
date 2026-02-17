// Write student records to File.
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

int main(){
    int n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    struct Student p[n];
    printf("Enter Student details:\n");
    for(int i=0;i<n;i++){
        scanf("%d %19s %d",&p[i].id,p[i].name,&p[i].marks);
    }
    FILE *fp;
    fp = fopen("students.txt","w");
    if(fp==NULL){
        printf("File cannot be opened\n");
        return 1;
    }
    for(int i=0;i<n;i++){
    fprintf(fp,"%d %s %d\n",p[i].id,p[i].name,p[i].marks);
    }
    fclose(fp);
    printf("Student records saved successfully\n");
    return 0;
}
