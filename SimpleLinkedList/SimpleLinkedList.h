#pragma once

#include "Node.h"
class SimpleLinkedList
{
public:
    Node* _start;
    SimpleLinkedList(Node* start);
    ~SimpleLinkedList();

    void add_end(Node* addition);
    void add_begin(Node* newbegin);
    void clear();
    void delete_node(std::string);

    friend std::ostream& operator <<(std::ostream& os, SimpleLinkedList sl);
  
};

