// Sort Students by marks + Assign grade + Rank list.
#include <stdio.h>

struct Student{
    int id;
    char name[20];
    int marks;
};

void Sorting_students(struct Student s[],int n){
    struct Student temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i].marks<s[j].marks){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void Assign_grade(struct Student s[],int n,char grade[]){
     for(int i=0;i<n;i++){
        if(s[i].marks>=90){
            grade[i] = 'A';
        }
        else if(s[i].marks>=75){
            grade[i] = 'B';
        }
        else if(s[i].marks>=50){
            grade[i] = 'C';
        }
        else{
            grade[i] = 'F';
        }
     }
}

void Print_rank(struct Student s[],int n,char grade[]){
    printf("Rank list (Descending Order of Marks):\n");
    for(int i=0;i<n;i++){
            printf("Rank %d: %d %s %d Grade: %c\n",
                   i+1,
                   s[i].id,
                   s[i].name,
                   s[i].marks,
                   grade[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    char grade[n];
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].id);
        scanf("%19s",s[i].name);
        scanf("%d",&s[i].marks);
    }
    Sorting_students(s,n);
    Assign_grade(s,n,grade);
    Print_rank(s,n,grade);
    return 0;
}
