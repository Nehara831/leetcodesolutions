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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp=head;
    ListNode* checkNode=temp;
    ListNode* result;
    ListNode* nextVal=temp->next;
    result=temp;
    if(temp==NULL){
        return temp;
    }    
    while(nextVal!=NULL)
    {
        if(nextVal->val!=temp->val)
        {
            checkNode->next=nextVal;
            checkNode=checkNode->next;          
        }
        temp=temp->next;
        nextVal=nextVal->next;
        
    }
    checkNode->next=NULL;
    return result;
    }
    void print(ListNode* head)
    {   ListNode* temp1=head;
        
        while (temp1!=nullptr) 
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
    
    }
    
int main(){
    // ListNode *linkedList1;
    // linkedList1=new ListNode(1,new ListNode(2, new ListNode(5)));
    // ListNode *linkedList2=deleteDuplicates(linkedList1);
    // //linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));
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
    first->val=1;
    first->next=second;
    second->val=2;
    second->next=third;
    third->val=3;
    third->next=fourth;
    fourth->val=3;
    fourth->next=NULL;
    // last->val=6;
    // last->next=list2;
    // list2->val=6;
    // list2->next=fir;
    // fir->val=7;
    // fir->next=seco;
    // seco->val=8;
    // seco->next=NULL;
    // thi->val=9;
    // thi->next=fourt;
    // fourt->val=9;
    // fourt->next=las;
    // las->val=10;
    // las->next=NULL;
    print(list1);
    cout<<endl;
    ListNode *linkedList1=deleteDuplicates(list1);
    print(linkedList1);




}