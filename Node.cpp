#include "Node.h"

Node::Node(){
    this->next = nullptr;
}

Node::Node(int id,string name){
    this->id = id;
    this->name = name;
}

string Node::getName() const
{
    return name;
}

void Node::setName(const string &value)
{
    name = value;
}

Node *Node::getNext() const
{
    return next;
}

void Node::setNext(Node *value)
{
    next = value;
}

int Node::getId() const
{
    return id;
}

void Node::setId(int value)
{
    id = value;
}
