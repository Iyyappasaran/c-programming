// Calculating the updated salary based on experience and print each employee's information using structures.
#include <stdio.h>
#include <stdlib.h>

struct info{
    char name[20];
    int id;
    int exp;
    int sal;
};

void printinfo(struct info p[],int n){
    for(int i=0;i<n;i++){
    if(p[i].exp>=10)
        p[i].sal += (p[i].sal*10)/100;
    else if(p[i].exp >= 5 && p[i].exp<=9)
        p[i].sal += (p[i].sal*5)/100;
    else
        p[i].sal += (p[i].sal*2)/100;
printf("Employee name: %s",p[i].name);
printf("\nEmployee Id: %d",p[i].id);
printf("\nYears of Experience: %d",p[i].exp);
printf("\nSalary: %d\n",p[i].sal);
    }
}


int main(){
    int n;
    scanf("%d",&n);
    struct info p[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %d %d",p[i].name,&p[i].id,&p[i].exp,&p[i].sal);
    }
     printinfo(p,n);
    return 0;
}
