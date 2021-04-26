#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED
#include "Structures.h"
void Insert_new_student_in_beginning(int*,struct student *,struct student);
void Insert_new_student_at_end(int*,struct student *,struct student);
void Insert_new_student_in_middle(int*,struct student *,struct student,int);
void insert_new(int*,struct student *,struct student,int);

struct student *dynamic_array (int*);


#endif // DYNAMICARRAY_H_INCLUDED
