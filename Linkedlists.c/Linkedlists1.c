// Create and Display Linked list (Manual creation)
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head,*second,*third;
    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));
    if(head==NULL || second==NULL || third==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}
