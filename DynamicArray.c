#include"DynamicArray.h"
#include <stdio.h>
#include <stdlib.h>
void Insert_new_student_in_beginning(int *N,struct student *a,struct student new_student)
{
    *N+=1;
    a=(struct student*)realloc(a,*N*sizeof(struct student)); //increasing the size of the array

    for (int j=*N-1;j>=0;j--)    // shifting elements of the array to make the first location empty
    {
        *(a+j)=*(a+j-1);
    };
    *a=new_student;
};

void Insert_new_student_at_end(int *N,struct student *a,struct student new_student)
{
    *N+=1;
    a=(struct student*)realloc(a,*N*sizeof(struct student)); //increasing the size of the array
    *(a+*N-1)=new_student;
};

void Insert_new_student_in_middle(int* N,struct student *a,struct student new_student,int index)
{
    *N+=1;
    a=(struct student*)realloc(a,*N*sizeof(struct student)); //increasing the size of the array

    for (int j=*N-1;j>=(index);j--) // shifting elements of the array to make the required location empty
    {
        *(a+j)=*(a+j-1);
    };
        *(a+index)=new_student;
};

void insert_new (int* N,struct student *a,struct student new_student,int index)
{
  if (index==0)
    Insert_new_student_in_beginning(&(*N),a,new_student);

  else if (index==1)
    Insert_new_student_at_end(&(*N),a,new_student);

  else
    Insert_new_student_in_middle(&(*N),a,new_student,index);

};

struct student *dynamic_array (int *N)
{
    struct student *p=(struct student*)malloc(*N*sizeof(struct student)); // initializing new dynamic array with pointer "p" points to it
    return p;
};

