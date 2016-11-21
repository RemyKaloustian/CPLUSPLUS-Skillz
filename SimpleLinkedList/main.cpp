#include <iostream>
#include "Node.h"
#include "SimpleLinkedList.h"

using std::cout;

int main()
{

    Node* n = new Node("The first");

    SimpleLinkedList* list = new SimpleLinkedList(n);

    delete n;
    cout << *list;

    list->add_end(new Node("Second"));

    cout << *list;

    list->add_begin (new Node("New One !"));
    list->add_end(new Node("Four !"));
    list->add_end(new Node("Five !"));



    cout << *list;

    list->clear();

    cout << *list;

}