#include <iostream>
using namespace std;

#include "List.h"

List::List()
{
  head = NULL;
}

List::~List()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(Book* stu)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = stu;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
    if (currNode->data->lessThan(stu))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == NULL) {
    head = tmpNode;
    head->prev = NULL;
  }
  else {
    prevNode->next = tmpNode;
    tmpNode->prev = prevNode;
  }

  tmpNode->next = currNode;
}

void List::print()
{
  Node* currNode = head;
  Node* prevNode = NULL;

  while (currNode != NULL) {
    currNode->data->print();
    prevNode = currNode;
    currNode = currNode->next;
  }
  currNode = prevNode;
  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->prev;
  }
}
