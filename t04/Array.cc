#include "Array.h"
#include <iostream>
#include "Book.h"

Array::Array()
{
    elements = new Book* [MAX_ARR_SIZE];
    size=0;
}
Array::~Array(){
    delete[] elements;
}

void Array::add(Book* newBook)
{
    elements[size]=newBook;
    size+=1;
    std::cout<<"in add\t"<<newBook;
}

void Array::print()
{
    for(int i=0; i<size;i++){
        std::cout<<"elements\t"<<elements<<'\n';
        std::cout<<"*elements\t"<<*elements<<'\n';
        //elements->print()<<'\n';
        
        
        }
}