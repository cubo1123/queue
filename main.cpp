#include <iostream>
#include<Queue.h>
using namespace std;

int main()
{
    Queue q;
    int opc=0;
    int id;
    string data;
    while(opc != -1){
        cout<<"1.-Is empty?"<<endl;
        cout<<"2.-Push"<<endl;
        cout<<"3.-Pop"<<endl;
        cout<<"4.-Show"<<endl;
        cout<<"5.-Front"<<endl;
        cout<<"6.-Back"<<endl;
        cout<<"7.-Size"<<endl;
        cin >> opc;
        if(opc == 1){
            cout<<q.empty()<<endl;
        }else if (opc == 2) {
            cout<<"id: ";
            cin>>id;
            cout<<"name: ";
            cin>>data;
            cout<<q.push(id,data)<<endl;
        }else if (opc == 3) {
            cout<<q.pop()<<endl;
        }else if (opc == 4) {
            cout<<"\n\n\n\n\n";
            q.show();
        }else if (opc == 5) {
            Node* temp = q.front();
            cout<<"Soy: "<<temp->getName() <<"\nMi id: "<<temp->getId()<<"\nmi posicion de memoria:"<<temp<<endl;
        }else if (opc == 6) {
            Node* temp = q.back();
            cout<<"Soy: "<<temp->getName() <<"\nMi id: "<<temp->getId()<<"\nmi posicion de memoria:"<<temp<<endl;
        }else if (opc == 7) {
            cout<<"Son: "<<q.size()<<endl;
        }
    }
    return 0;
}
