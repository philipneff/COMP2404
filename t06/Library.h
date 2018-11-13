#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include "Array.h"
#include "List.h"

using namespace std;

class Library
{
    public:
        void addBook(Book*);
        void printLibrary();

    private:
        List newArray;
};

#endif
