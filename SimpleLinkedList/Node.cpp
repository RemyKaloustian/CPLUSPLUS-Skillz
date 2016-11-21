#include "Node.h"
#include <string>

Node::Node(std::string value, Node* next) :_value(value), _next(next)
{
   
}


Node::~Node()
{
}
