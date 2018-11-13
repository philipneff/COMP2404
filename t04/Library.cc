#include <iostream>
#include <iomanip>

#include "Book.h"
#include "Library.h"
#include "Array.h"

using namespace std;

void Library::addBook(Book* myBook)
{
    newArray.add(myBook);
}

void Library::printLibrary()
{
    cout << endl << endl << "LIBRARY: " << endl;
    newArray.print();
    cout << endl;
}
