// Linked lists -> Insert Node at beginning
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insertnode(struct Node *head,int p){
    struct Node *newnode = malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Memory alloction failedd\n");
        return head;
    }
    newnode->data = p;
    newnode->next = head;
    head = newnode;
    return head;
}

int main(){
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newnode = NULL;
    printf("Enter data:\n");
    for(int i=0;i<n;i++){
        newnode = malloc(sizeof(struct Node));
        if(newnode==NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        if(head==NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    int p;
    printf("Enter insert value:\n");
    scanf("%d",&p);
    head = insertnode(head,p);
    temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    temp = head;
    while(temp!=NULL){
        struct Node *nextnode = temp->next;
        free(temp);
        temp = nextnode;
    }
    return 0;
}
