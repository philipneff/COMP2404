#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Array.h"
//#define MAX_ARR_SIZE  128
class Library
{
   
    public:
    //variables
        Book arr[MAX_ARR_SIZE];
        int numOfBook;
    //functions
       
        Library();
        ~Library();
        void addBook(Book&);
        void print();      

    private:
       


};




#endif