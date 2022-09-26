#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};
void print(ListNode* head)
    {   ListNode* temp1=head;
        
        while (temp1!=nullptr) 
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    
    }
ListNode* swapPairs(ListNode* head) {
    ListNode* temp=head;
    ListNode* pre;
    ListNode* current;
    ListNode* link;
    ListNode* new1=new ListNode();
    ListNode* result;
    result=temp;
        if(head==NULL|| head->next==NULL){
            return head;
        }
        else{
    while(temp!=NULL){
        pre=temp;
        current=pre->next;
        if(current==NULL){
            break;
        }
        if(current->next!=NULL){
        link=current->next;}
        else{
            link=NULL;
        }
        current->next=NULL;
        new1->val=current->val;
        current->val=pre->val;
        pre->val=new1->val;
        
        pre->next=current;
        current->next=link;
        if(temp->next==NULL){
            temp=NULL;
        }
        temp=temp->next->next;


    }
    return result;
    }}
    int main(){
    ListNode* list1=new ListNode();
    ListNode* first=new ListNode();
    ListNode* second=new ListNode();
    ListNode* third=new ListNode();
    ListNode* last=new ListNode();
    ListNode* fourth=new ListNode();
    ListNode* list2=new ListNode();
    ListNode* fir=new ListNode();
    ListNode* seco=new ListNode();
    ListNode* thi=new ListNode();
    ListNode* las=new ListNode();
    ListNode* fourt=new ListNode();
    list1->val=1;
    list1->next=first;
    first->val=2;
    first->next=second;
    second->val=3;
    second->next=third;
    third->val=4;
    third->next=NULL;
    fourth->val=5;
    fourth->next=last;
    last->val=6;
    last->next=list2;
    list2->val=7;
    list2->next=fir;
    fir->val=8;
    fir->next=seco;
    seco->val=9;
    seco->next=NULL;
    // thi->val=10;
    // thi->next=fourt;
    // fourt->val=11;
    // fourt->next=las;
    // las->val=12;
    // las->next=NULL;
    print(list1);
    cout<<endl;
    ListNode *linkedList1=swapPairs(list1);
    print(linkedList1);
    }