#include "Queue.h"

Queue::Queue(){
    cont = 0;
    first = nullptr;
    last = nullptr;
}

bool Queue::empty()
{
    return !cont;
}

int Queue::size()
{
    return cont;
}

Node *Queue::front()
{
    return first;
}

Node *Queue::back()
{
    return last;
}

bool Queue::push(int id, string name)
{
    if(!checkId(id)){
        return false;
    }
    Node* n = new Node(id,name);
    n->setNext(nullptr);
    cont++;
    if(first == nullptr){
        first = n;
        last = n;
        return true;
    }
    last->setNext(n);
    last = n;
    return true;
}

bool Queue::checkId(int id){
    if(search(id) == nullptr){
        return true;
    }else{
        return false;
    }
}

Node* Queue::search(int id){
    Node* head = first;
    while(head){
        if(head->getId()==id){
            cout << "id ocupado por: " << head->getName() <<endl;
            return head;
        }
        head = head->getNext();
    }
    return nullptr;
}

bool Queue::pop()
{
    if(first == nullptr){
        return false;
    }
    first = first->getNext();
    cont--;
    return true;
}

void Queue::show()
{
    Node* head = first;
    while(head){
        cout<<"Soy: "<< head->getName() << " mi id es: " << head->getId() << endl;
        head = head->getNext();
    }
}

