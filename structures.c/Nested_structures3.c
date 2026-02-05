// Print N students from given city and count students having same pincode
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address{
    char city[20];
    int pincode;
};

struct Student{
    int id;
    char name[20];
    struct Address addr;
};

void PrintGivenCity_Students(struct Student p[],const char City[],int n){
    printf("\nStudents from %s:\n",City);
    int found =0;
    for(int i=0;i<n;i++){
    if(strcmp(City,p[i].addr.city)==0){
        printf("%d %s %s %d\n",
               p[i].id,
               p[i].name,
               p[i].addr.city,
               p[i].addr.pincode);
               found =1;

    }
    }
    if(!found)
        printf("No students found from this city\n");
}

void CountSamePincode_Students(struct Student p[],int n){
    printf("\nPincode frequency:\n");
    for(int i=0;i<n;i++){
        int count=0;
        int iscounted=0;
        for(int k=0;k<i;k++){
            if(p[k].addr.pincode == p[i].addr.pincode){
                iscounted = 1;
                break;
            }
        }
        if(!iscounted){
            for(int j=0;j<n;j++){
                if(p[j].addr.pincode == p[i].addr.pincode)
                    count++;
            }
            printf("%d -> %d Students\n",p[i].addr.pincode,count);
        }

    }

}

int main(){
    int n;
    printf("Enter number of students :\n");
    scanf("%d",&n);
    struct Student p[n];
    printf("Enter student details:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i].id);
        scanf("%19s",p[i].name);
        scanf("%19s",p[i].addr.city);
        scanf("%d",&p[i].addr.pincode);
    }
    char City[20];
    printf("\nEnter city to search:");
    scanf("%19s",City);
    PrintGivenCity_Students(p,City,n);
    CountSamePincode_Students(p,n);
    return 0;
}

