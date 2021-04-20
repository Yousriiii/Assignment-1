#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "Structures.h"
struct Node* create_list();
int list_size(struct Node * head);
void insert_head(struct Node** head , struct student s);
void insert_tail(struct Node** tail , struct student s);
void insert(struct Node* head , struct student s , int d);
void print_list(struct Node* head);
void freeLinkedList(struct Node* head);
#endif // LINKEDLIST_H_INCLUDED
