#ifndef NODE_H
#define NODE_H
#include<iostream>

using namespace std;
class Node
{
public:
    Node();
    Node(int id,string name);
    string getName() const;
    void setName(const string &value);
    Node *getNext() const;
    void setNext(Node *value);
    int getId() const;
    void setId(int value);

private:
    string name;
    Node* next;
    int id;
};
#endif
