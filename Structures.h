#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED
#define NULL 0
struct student{
    char name[40];
    int id;
    int d , m , y;
    int last_score;
};

struct Node{
    struct Node* next;
    struct student data;
};


#endif // STRUCTURES_H_INCLUDED
