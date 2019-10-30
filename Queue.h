#ifndef QUEUE_H
#define QUEUE_H
#include<Node.h>

class Queue
{
public:
    Queue();
    bool empty();
    int size();
    Node* front();
    Node* back();
    bool push(int id,string name);
    bool pop();
    void show();
private:
    int cont;
    Node* first;
    Node* last;
    bool checkId(int id);
    Node* search(int id);
};

#endif // QUEUE_H
