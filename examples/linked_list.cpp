#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class Node{
    public:
   int data;
   Node* next;
    



};
void printNode(Node* n){
    int count=0;
    Node* node1;
    node1=n;
        while(node1!=NULL){
            //cout<<node1->data;
            node1=node1->next;
            count++;
            //cout<<count<<endl;
        }
        int i=0;
        Node* next1;
        while(i<count/2 -1)
        {   
            n=n->next;
            i++;
        }
        if(count % 2 ==0){
            next1=n->next;
            cout<<((n->data+next1->data)/2);
        }
        else{
            cout<<n->data;
        }
        
    }
 



int main(){
    Node* head=new Node();
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* last=new Node();
    Node* fourth=new Node();

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=fourth;
    fourth->data=50;
    fourth->next=last;
    last->data=60;
    last->next=NULL;
    printNode(head);
    


}