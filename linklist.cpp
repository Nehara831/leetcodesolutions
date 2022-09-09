#include <iostream>
using namespace std;
class Node
{
        public:
            int data;
            Node* next;

            // Node(int date, Node* next){
            //     this->data = data;
            //     this->next = next;
            // }
};
class LinkedList
{
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
    void insertNode(int data,int index)
    {
        int i=0;
        Node* newnode;
        Node* temp;
        Node* temp2;
        newnode =new Node();
        temp=head;
        newnode->data=data;
        while (i !=index-2)
        {   
            temp=temp->next;
            ++i;
        }
    temp2=temp->next;
    temp->next=newnode;
    newnode->next=temp2;  

    }

     void deleteNode(){
        
        Node* temp1;
        
        temp1=head;
        
        while (temp1->next !=nullptr)
        {
            temp1=temp1->next;

        }
        delete temp1; 

    }

    void print()
    {   Node* temp=head;

        while (temp->next !=nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    }
};
int main()
{
    LinkedList l1(5);
    l1.addNode(1);
    l1.addNode(2);
    l1.addNode(4);
    l1.addNode(5);
    l1.addNode(6);
    l1.addNode(7);
    l1.print();
    cout<<""<<endl;
    l1.insertNode(244,1);
    l1.print();
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
