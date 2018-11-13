#include "Library.h"
#include <iostream>
#include "Array.h"

Library::~Library(){}

void Library::addBook(Book& newBook)
{
    //newBook.print();
    
    arr.add(newBook);
    
    //numOfBook+=1;
}

void Library::print()
{

  std::cout << endl << endl << "LIBRARY: " << endl;
  arr.print();
  

  std::cout << endl;

}