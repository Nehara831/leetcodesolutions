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
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp=new ListNode();
    temp=head;
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
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head->next;
        ListNode* pre;
        ListNode* link=temp->next;        
        ListNode* new1=head;
        new1->next=NULL;
        while(temp!=NULL){
            pre=temp;
            link=pre->next;
            pre->next=NULL;
            pre->next=new1;
            new1=pre;
            temp=link;       
        }
        return pre;
    }
void print(ListNode* head)
    {   ListNode* temp=head;
        
        while (temp!=nullptr) 
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
    }
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
    third->next=fourth;
    fourth->val=5;
    fourth->next=last;
    last->val=6;
    last->next=list2;
    list2->val=7;
    list2->next=fir;
    fir->val=8;
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
    cout<<endl;
    ListNode*lis1= reverse(list1);
    print(lis1);
    cout<<endl;
    print(list1);
    
    


}