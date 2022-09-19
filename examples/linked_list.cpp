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
        while(n!=NULL){
            cout<<n->data<<endl;
            n=n->next;
            count++;
            cout<<count<<endl;
        }
    }
 



int main(){
    Node* head=new Node();
    Node* first=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* last=new Node();

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=last;
    last->data=40;
    last->next=NULL;
    printNode(head);
    


}