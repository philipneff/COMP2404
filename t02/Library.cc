#include "Library.h"
#include <iostream>


Library::Library(){
    numOfBook=0;
}
Library::~Library(){}

void Library::addBook(Book& newBook)
{
   
    arr[numOfBook]=newBook;
    numOfBook+=1;
}

void Library::print()
{

  std::cout << endl << endl << "LIBRARY: " << endl;

  for (int i=0; i<numOfBook; ++i)
    arr[i].print();

  std::cout << endl;

}