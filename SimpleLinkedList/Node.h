#pragma once
#include <string>
class Node
{
public:
    Node* _next;
    std::string _value;
    Node(std::string value, Node* next = nullptr);
    ~Node();
};

