// Pass pointer to function and increase salary by 10% and print updated details.
#include <stdio.h>

struct Employee{
    int id;
    char name[20];
    float salary;
};

void print_salary(struct Employee *p){
   p->salary += p->salary*0.10;
   printf("Updated Employee details:\n%d %s %.2f",
          p->id,
          p->name,
          p->salary);
}

int main(){
    struct Employee n;
    scanf("%d",&n.id);
    scanf("%19s",n.name);
    scanf("%f",&n.salary);
    print_salary(&n);
    return 0;
}
