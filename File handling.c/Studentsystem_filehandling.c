// Update Student system to load info from files in the start and on exit save updated info back to file
#include <stdio.h>
#include <stdlib.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

void display(struct Student *p,int n){
    printf("Student Records:\n");
    for(int i=0;i<n;i++){
        printf("%d %s %d\n",
               (p+i)->id,
               (p+i)->name,
               (p+i)->marks);
    }
}

void search(struct Student *p,int n,int id){
    int found =0;
    for(int i=0;i<n;i++){
        if((p+i)->id==id){
            found =1;
            printf("Student found:\n%d %s %d\n",
                   (p+i)->id,
                   (p+i)->name,
                   (p+i)->marks);
        }
    }
    if(found==0){
        printf("Student not found\n");
    }
}

void update(struct Student *p,int n,int id,int mark){
    int found =0;
    for(int i=0;i<n;i++){
        if((p+i)->id==id){
            found =1;
            (p+i)->marks = mark;
            printf("Marks updated sucessfully\n");
        }
    }
    if(found==0){
        printf("Student not found\n");
    }
}

void topscorer(struct Student *p,int n){
    if(n==0){
        printf("No students available\n");
        return;
    }
    struct Student *max = p;
    for(int i=1;i<n;i++){
        if((p+i)->marks>max->marks){
            max = (p+i);
        }
    }
    printf("Top scorer:\n%d %s %d\n",
           max->id,
           max->name,
           max->marks);
}

struct Student *deletestudent_shrinkmemory(struct Student *p,int id,int *n){
    int index = -1;
    for(int i=0;i<(*n);i++){
        if(p[i].id==id){
            index = i;
            break;
        }
    }
    if(index==-1){
        printf("ID not found\n");
        return p;
    }
    else{
        for(int i=index;i<(*n)-1;i++){
            p[i] = p[i+1];
        }
        (*n)--;
    struct Student *temp;
    temp = realloc(p,(*n)*sizeof(struct Student));
    if(temp!=NULL){
        p = temp;
    }
    printf("Student deleted successfully\n");
    return p;
    }
}

int main(){
    int n = 0;
    struct Student *p = NULL;
    FILE *fp;
    fp = fopen("students.txt","r");
    if(fp==NULL){
        printf("File cannot be opened\n");
        return 1;
    }
    struct Student temp;
    while(fscanf(fp,"%d %19s %d",&temp.id,temp.name,&temp.marks)==3){
        n++;
    }
    rewind(fp);
    p = malloc(n*sizeof(struct Student));
    if(p==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    int i=0;
    while(fscanf(fp,"%d %19s %d",&p[i].id,p[i].name,&p[i].marks)==3){
        i++;
    }
    fclose(fp);
    printf("Menu:\n");
    printf("1. Display All Students\n");
    printf("2. Search Student by ID\n");
    printf("3. Update Marks by ID\n");
    printf("4. Display Top scorer\n");
    printf("5. Delete a Student by ID and shrink memory\n");
    printf("6. Exit\n");
    int choice;
    int id,mark;
    do{
    printf("Enter choice:\n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        display(p,n);
        break;
    case 2:
        printf("Enter ID to search:\n");
        scanf("%d",&id);
        search(p,n,id);
        break;
    case 3:
        printf("Enter ID to update:\n");
        scanf("%d",&id);
        printf("Enter new marks:\n");
        scanf("%d",&mark);
        update(p,n,id,mark);
        break;
    case 4:
        topscorer(p,n);
        break;
    case 5:
        printf("Enter ID to delete:\n");
        scanf("%d",&id);
        p = deletestudent_shrinkmemory(p,id,&n);
        break;
    case 6:
        printf("Exiting program...\n");
        break;
    default:
        printf("Invalid choice\n");
     }
   }while(choice!=6);
   if(fp==NULL){
    printf("File cannot be saved\n");
    free(p);
    return 1;
   }
   fp = fopen("students.txt","w");
   for(int i=0;i<n;i++){
    fprintf(fp,"%d %s %d\n",p[i].id,p[i].name,p[i].marks);
   }
   fclose(fp);
   free(p);
    return 0;
}
