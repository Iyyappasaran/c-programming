// Linkedlists: Delete node by value
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *delete_node_by_value(struct Node *head,int value){
    if(head==NULL){
        return head;
    }
    if(head->data==value){
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    else{
        struct Node *prev = NULL;
        struct Node *temp = NULL;
        temp =  head;
        while(temp!=NULL && temp->data!=value){
            prev = temp;
            temp = temp->next;
        }
        if(temp==NULL){
            printf("Value not found\n");
            return head;
        }
        prev->next = temp->next;
        free(temp);
        return head;
    }
};

int main(){
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    struct Node *head= NULL;
    struct Node *temp= NULL;
    struct Node *newnode= NULL;
    printf("Enter node values:\n");
    for(int i=0;i<n;i++){
        newnode =  malloc(sizeof(struct Node));
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
    printf("Enter node value to delete:\n");
    scanf("%d",&value);
    head = delete_node_by_value(head,value);
    printf("Linked list after deletion:\n");
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
