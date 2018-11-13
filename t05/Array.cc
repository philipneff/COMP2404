#include <iostream>
#include <iomanip>

#include "Book.h"
#include "Library.h"
#include "Array.h"

using namespace std;

Array::Array()
{
    elements = new Book* [MAX_ARR_SIZE]; 
    size = 0;
}

void Array::add(Book* myBook)
{
	int i;

	// If we array is empty, no need to call lessThan()
	// just add the book
	if (size == 0) {
		elements[size] = myBook;
		++size;
	
	// If we have one book already, we'll evaluate
	// whether they should be swapped, or the new
	// book just appended
	} else if (size == 1 ) {
		if (elements[0]->lessThan(myBook)) {
			elements[size] = myBook;
			++size;
		} else {
			Book* temp = elements[0];
			elements[0] = myBook; 
			elements[1] = temp;
			++size;
		} 
	
	// If we have more than 2 books, we'll
	// loop through the array, looking for
	// a book with date > myBook
	} else { 
		for (i = 0; i < size; ++i) 
		{
			if (!(elements[i]->lessThan(myBook))) {
				break;
			} else {
				continue;
			}
		}

		// Now that we found an appropriate place
		// in the array, we'll right-shift all elements
		// from that location to the end of the array
		for (int j = size; j >= i; j--) 
		{
			elements[j+1] = elements[j];
		}

		// We'll add our book in the appropriate location
		elements[i] = myBook;
		++size;
	}
}

void Array::print()
{
    for (int i = 0; i < size; ++i)
        elements[i]->print();
}

Array::~Array()
{
    // Release dynamically allocated Book objects
    for (int i = 0; i < size; ++i)
    {
   	delete elements[i]; 
    }
    // Release dynamically allocated array
    delete [] elements;
}
