// Display employee with highest salary and display average salary.
#include <stdio.h>

struct Employee{
    int id;
    char name[20];
    float salary;
};

void highest_salary(struct Employee s[],int n){
    printf("Employee with highest salary:\n");
    struct Employee max = s[0];
    for(int i=1;i<n;i++){
        if(s[i].salary>max.salary){
             max = s[i];
        }
    }
    printf("%d %s %.2f",
           max.id,
           max.name,
           max.salary);
           printf("\n");
}

void average_salary(struct Employee s[],int n){
    float total =0;
    for(int i=0;i<n;i++){
        total += s[i].salary;
    }
    printf("\nAverage salary:\n%.2f",total/n);
}

int main(){
    int n;
    scanf("%d",&n);
    struct Employee s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].id);
        scanf("%19s",s[i].name);
        scanf("%f",&s[i].salary);
    }
    printf("\n");
    highest_salary(s,n);
    average_salary(s,n);
    return 0;
}
