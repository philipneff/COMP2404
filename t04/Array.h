#ifndef ARRAY_H
#define ARRAY_H
//header inclusions
#include "Book.h"

//Global variables
#define MAX_ARR_SIZE    128

class Array{
    public:
    //variables
        Book *elements[MAX_ARR_SIZE];
        int size;
    //functions
        Array();
        ~Array();
        void add(Book*);
        void print();

};






#endif