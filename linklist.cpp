#include <iostream>
using namespace std;
class Node{
        public:
            int data;
            Node* next;

            // Node(int date, Node* next){
            //     this->data = data;
            //     this->next = next;
            // }
    };
class LinkedList{
    public:
    Node* head;
    
    LinkedList(int data){
        head = new Node();
        head->data=data;
        
    }

    void addNode(int data){
        Node* newnode;
        Node* temp;
        newnode =new Node();
        temp=head;
        newnode->data=data;
        while (temp->next !=nullptr){
            temp=temp->next;

        }
    temp->next=newnode;    

    }
     void deleteNode(){
        
        Node* temp1;
        
        temp1=head;
        
        while (temp1->next !=nullptr){
            temp1=temp1->next;

        }
        delete temp1; 

    }

    void print()
    {   Node* temp=head;

        while (temp->next !=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
}





};
int main(){
    LinkedList l1(5);
    l1.addNode(3);
    l1.addNode(6);
    l1.addNode(39);
    
    l1.print();
    l1.deleteNode();
    //l1.print();










    /*Node* head;
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
*/




}
