#include "SimpleLinkedList.h"

#include <ostream>
#include <iostream>


SimpleLinkedList::SimpleLinkedList(Node* start)
{
    if (start != nullptr)
    {
        _start = new Node(start->_value);
    }
}


void SimpleLinkedList::add_end(Node* addition)
{
    if (_start != nullptr)
    {
        Node* toEnd = _start;

        for (; toEnd->_next != nullptr; toEnd = toEnd->_next)
        {

        }

        toEnd->_next = new Node(addition->_value);
    }
    else
    {
        _start = new Node(addition->_value);
    }

}

void SimpleLinkedList::add_begin(Node* newbegin)
{
    Node* newstart = new Node(newbegin->_value);
    if (_start != nullptr)
    {
        newstart->_next = _start;
    }

    _start = newstart;

}

void SimpleLinkedList::clear()
{
    if (_start != nullptr)
    {
        while (_start->_next->_next != nullptr)
        {
            std::cout << "start->next is  " << _start->_next->_value << "\n";
            Node* temp = _start->_next;
            std::cout << "temp->value = " << temp->_value << "\n";

            if (temp->_next != nullptr)
                _start -> _next = temp->_next;
            delete temp;
        }
        delete _start->_next;
        delete _start;
         _start = nullptr;
    }    
}

void SimpleLinkedList::delete_node(std::string todelete)
{
    for (Node* it = _start; it != nullptr; it = it->_next)
    {
        if ()
    }
}


std::ostream& operator <<(std::ostream& os, SimpleLinkedList sl)
{
    std::cout << "In ostream\n";
    unsigned i = 0;
    if (sl._start != nullptr)
    {
        for (Node* it = sl._start; it != nullptr; it = it->_next)
        {
            os << i << " : " << it->_value << "\n";
            ++i;
        }
    }
    else os << "The list is empty...\n";
    return os;
}



SimpleLinkedList::~SimpleLinkedList()
{
}
