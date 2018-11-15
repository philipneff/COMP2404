#include "Array.h"
#include <iostream>

Array::Array()
{
    size=0;
}
Array::~Array(){}

void Array::add(Book& newBook)
{
    elements[size]=newBook;
    size+=1;

}

void Array::print()
{
    for(int i=0; i<size;i++){
        elements[i].print();
    }
}