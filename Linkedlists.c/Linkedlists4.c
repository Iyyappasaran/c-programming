// Linked lists - Insert a node at end using function
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *insert_at_end(struct Node *head,int value){
    struct Node *newnode = malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Memory allocation failed\n");
        return head;
    }
    newnode->data = value;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        return head;
    }

    struct Node *temp = head;
    while(temp->next != NULL){
        temp =  temp->next;
    }
    temp->next = newnode;
    return head;
};

int main(){
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newnode = NULL;
    printf("Enter node details:\n");
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
        int value;
        printf("Enter value to insert at end:\n");
        scanf("%d",&value);
        head = insert_at_end(head,value);
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
