#include "Array.h"
#include <iostream>

Array::Array()
{
    size=0;
}
Array::~Array(){}

void Array::add(Book* newBook)
{
    std::cout<<"here1"<<endl;
    elements[size]=newBook;
    std::cout<<size<<endl;
    size+=1;
    std::cout<<size<<endl;

}

void Array::print()
{
    std::cout<<"there"<<endl;
    for(int i=0; i<size;i++){
     std::cout <<""<< elements[i]<<'\n';
    //elements=elements+1;
    }
}