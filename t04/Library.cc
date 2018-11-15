#include "Library.h"
#include <iostream>
#include "Array.h"

Library::Library(){}
Library::~Library(){}

void Library::addBook(Book& newBook)
{
  
    arr.add(newBook);
    
}

void Library::print()
{

  std::cout << endl << endl << "LIBRARY: " << endl;
  arr.print();
  

  std::cout << endl;

}