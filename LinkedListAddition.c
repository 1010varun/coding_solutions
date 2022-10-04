#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node * next;
};

struct node * additionAtTail(struct node * head, int ele){
    struct node * ptr = head;
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p->data = ele;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = NULL;
    return(head);
}

void llTraversal(struct node * head){
    while(head != NULL){
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main(){
    struct node * head = (struct node *)malloc(sizeof(struct node));
    struct node * second = (struct node *)malloc(sizeof(struct node));
    struct node * third = (struct node *)malloc(sizeof(struct node));
    int ele;

    head->data = 10;
    head->next = second;

    second->data = 45;
    second->next = third;

    third->data = 78;
    third->next = NULL;

    printf("enter the element : \n");
    scanf("%d", &ele);

    printf("Linked list before addition : \n");
    llTraversal(head);

    printf("linked list after insertion : \n");
    head = additionAtTail(head, ele);
    llTraversal(head);

    return 0;
}