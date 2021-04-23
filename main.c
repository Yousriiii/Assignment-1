#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main()
{
    struct Node* head = (struct Node *)LinkedList();
    struct Node* tail = head;
    struct student s ={"Ahmed" , 118 , 25 , 2 , 2000 , 4};
    struct student s1 ={"Mohamed" , 112 , 12 , 1 , 1990 , 154};
    struct student st ={"Tail node" , 112 , 12 , 1 , 1990 , 154};
    head->data = s1;
    insert(&head , &tail, s ,0);
    insert(&head , &tail, s ,0);
    insert(&head , &tail, s ,0);
    insert(&head , &tail, s ,0);
    insert(&head , &tail, s ,0);
    int n = list_size(head);
    insert(&head , &tail, st ,n);
    print_list(head);
    printf(" \n %s",tail->data.name);
}
