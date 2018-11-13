#include "Library.h"
#include <iostream>
#include "Array.h"

Library::Library(){
    numOfBook=0;
}
Library::~Library(){}

void Library::addBook(Book& newBook)
{
    //newBook.print();
    
    arr.add(newBook);
    //std::cout << "in add Book" << endl;
    numOfBook+=1;
}

void Library::print()
{

  std::cout << endl << endl << "LIBRARY: " << endl;
  arr.print();
  //for (int i=0; i<numOfBook; ++i)
    //arr[i].print();

  std::cout << endl;

}