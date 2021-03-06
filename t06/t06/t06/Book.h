#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0);
    void setBook(int, string, string, int);
    void print();
    bool lessThan(Book*);

  private:
    int    id;
    string title;
    string author;
    int    year;
};

#endif

