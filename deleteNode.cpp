#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
};
ListNode* removeElements(ListNode* head, int val) {
    ListNode* temp=head;
    ListNode* result=temp;
    while(temp!=NULL){
        if(temp->val==val){
            temp->val=temp->next->val;
            temp->next=temp->next->next;
        }
        temp=temp->next;
    
    }
return result;
    }
    void print(ListNode* head)
    {   ListNode* temp=head;
        
        while (temp!=nullptr) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    }
int main()
{

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
    third->next=fourth;
    fourth->val=5;
    fourth->next=last;
    last->val=6;
    last->next=list2;
    list2->val=7;
    list2->next=fir;
    fir->val=5;
    fir->next=seco;
    seco->val=9;
    seco->next=thi;
    thi->val=10;
    thi->next=fourt;
    fourt->val=11;
    fourt->next=las;
    las->val=12;
    las->next=NULL;
    print(list1);
    ListNode* lis1= removeElements(list1,5);
    cout<<endl;
    print(lis1);
    
    
}