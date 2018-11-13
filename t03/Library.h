#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Array.h"

class Library
{
   
    public:
    //variables
        Array arr;
        int numOfBook;
    //functions
       
        Library();
        ~Library();
        void addBook(Book&);
        void print();      

    private:
       


};




#endif