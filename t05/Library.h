#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Array.h"

using namespace std;

class Library
{
    public:
        void addBook(Book*);
        void printLibrary();

    private:
        Array newArray;
};

#endif
