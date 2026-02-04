// Introduction : Read and print using Nested structures.
#include <stdio.h>
#include <stdlib.h>

struct Date{
    int day;
    char month[10];
    int year;
};
struct Student{
    char name[20];
    struct Date dob;
};

int main(){
    struct Student n;
    scanf("%19s",n.name);
    scanf("%d",&n.dob.day);
    scanf("%9s",n.dob.month);
    scanf("%d",&n.dob.year);
    printf("%s\n",n.name);
    printf("%d ",n.dob.day);
    printf("%s ",n.dob.month);
    printf("%d",n.dob.year);
    return 0;
}
