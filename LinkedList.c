#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
struct Node* LinkedList(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->next = NULL;
    return head;
}



int list_size(struct Node * head){
    int s = 0;
    while(head != NULL) {s++;head = head->next;};
    return s;
}



void insert_head(struct Node** head , struct student s){
    struct Node* x = (struct Node*)malloc(sizeof(struct Node));
    x->data = s;
    x->next = *head;
    *head = x;
}



void insert_tail(struct Node** tail , struct student s){
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data = s;
    temp->next = NULL;
    (*tail)->next = temp;
    *tail = temp;
}




void insert_in_the_middle(struct Node* head ,struct Node **tail, struct student s , int d){
    int size = list_size(head);
    if(d > size) {printf("\nout of range\n");return;}
    struct Node* x = (struct Node*)malloc(sizeof(struct Node));
    x->data = s;
    for(int i = 0 ; i < d-1  ; i++){
        head = head->next;
    }
    x->next = head->next;
    head->next = x;
    if(x->next == NULL){
        *tail = x;
    }

}




void print_list(struct Node* head){
    struct Node* temp = head;
    printf("\n");
    while(temp -> next != NULL){

        printf("|%d %s  %d| --> " ,temp->data.id , temp->data.name , temp->data.last_score);
        temp = temp->next;
    }
    printf(" |%d %s  %d |" ,temp->data.id , temp->data.name , temp->data.last_score);
    printf("\n");
}

void insert(struct Node **head ,struct Node **tail, struct student s , int i){
    const int size = list_size(*head)-1;
    switch(i){
        case 0:
            insert_head(head , s);
            break;
        default:
            insert_in_the_middle(*head,tail, s , i);
            break;

    }
}

void freeLinkedList(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        head = head->next;
        free(temp);
        temp = head;
    }
}
