// Linked lists : Reverse Linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *reverse_list(struct Node *head){
    if(head==NULL){
        return head;
    }
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
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
    head = reverse_list(head);
    temp = head;
    printf("Reversed linked list:\n");
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
