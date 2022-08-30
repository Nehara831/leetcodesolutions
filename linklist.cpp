#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (){

    }

};
int main(){
    Node* head;
    Node* firstnode;
    Node* secondnode;
    Node* tail;
    head=new Node();
    firstnode=new Node();
    secondnode=new Node();
    tail=new Node();

    head->data=1;
    head->next=firstnode;
    firstnode->data=2;
    firstnode->next=secondnode;
    secondnode->data=3;
    secondnode->next=tail;
    tail->data=8;
    tail->next=NULL;
    




}
