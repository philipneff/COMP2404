#include "Array.h"
#include <iostream>

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
    
size+=1;
}

void Array::print()
{
    for(int i=0; i<size;i++){
        std::cout<<"elements\t"<<elements<<'\n';
        std::cout<<"*elements\t"<<*elements<<'\n';
        
        
        }
}