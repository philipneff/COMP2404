#include "View.h" 

View::View(){}
int mainMenu()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions){
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

void View::bookInput()
{
  cout << "id:  ";
  cin >> id;
  cout << "title: ";
  cin.ignore();
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin << year;
}

void View::print()
{
  myLibrary.printLibrary();
}
