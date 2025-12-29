//Use a structure to emaluate a simple library card catalog.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books{
    char title[80];
    char name1[20];
    char name2[20];
    char pubname[80];
};

void printbook(struct books b){
    printf("\nTitle: %s",b.title);
    printf("\nAuthor: %s %s",b.name1,b.name2);
    printf("\nPublisher: %s",b.pubname);
}

// Search by book title
void search_Title(struct books b[],int n,char *b_name){
    printf("\n\nSearch Results by Title: ");
    for(int i=0;i<n;i++){
        if(strcmp(b[i].title,b_name)==0){
            printbook(b[i]);
        }
    }
}
// Search by author's first name
void search_Author(struct books b[],int n,char *a_name){
    printf("\n\nSearch Results by Author's first name: ");
    for(int i=0;i<n;i++){
        if(strcmp(b[i].name1,a_name)==0){
            printbook(b[i]);
}
    }
}
// Search by publisher's name
void search_Publisher(struct books b[],int n,char *p_name){
    printf("\n\nSearch Results by Publisher: ");
    for(int i=0;i<n;i++){
        if(strcmp(b[i].pubname,p_name)==0){
            printbook(b[i]);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    struct books b[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %s %s",b[i].title,b[i].name1,b[i].name2,b[i].pubname);
    }
    char b_name[80];
    char a_name[20];
    char p_name[80];
    scanf("%s",b_name);
    scanf("%s",a_name);
    scanf("%s",p_name);
    search_Title(b,n,b_name);
    search_Author(b,n,a_name);
    search_Publisher(b,n,p_name);
    return 0;
}
