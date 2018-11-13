#ifndef ARRAY_H
#define ARRAY_H
#define MAX_ARR_SIZE    128

#include "Book.h"

class Array 
{
    public:
        Array();
	~Array();
       	void add(Book*);
        void print();

    private:
	Book** elements; // Will use dyn. alloc. array of pointers
        int size;
};

#endif
