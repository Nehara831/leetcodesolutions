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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* n1=list1;
    ListNode* n2=list2;
    ListNode* checkNode=new ListNode();
    ListNode* head;
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    
    if(n1->val<=n2->val)
        {   
            checkNode=n1;        
            n1=n1->next;
        }
        else
         {  
            checkNode=n2;
            n2=n2->next;    
        }

    head=checkNode;
    while(n1!=NULL && n2 !=NULL){
        
        if(n1->val<=n2->val)
        {
            checkNode->next=n1;
            checkNode=checkNode->next; 
            n1=n1->next;
        }
        else
         {
            checkNode->next=n2;
            checkNode=checkNode->next; 
            n2=n2->next;    
        }

        
    }
    if(n1==NULL){
        checkNode->next=n2;
        
    }
    else if (n2==NULL){
        checkNode->next=n1;
    }

return head;

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
    first->val=3;
    first->next=second;
    second->val=4;
    second->next=third;
    third->val=4;
    third->next=fourth;
    fourth->val=5;
    fourth->next=last;
    last->val=6;
    last->next=list2;
    list2->val=1;
    list2->next=fir;
    fir->val=2;
    fir->next=seco;
    seco->val=5;
    seco->next=thi;
    thi->val=5;
    thi->next=fourt;
    fourt->val=6;
    fourt->next=las;
    las->val=7;
    las->next=NULL;
    
    // ListNode *linkedList1=mergeTwoLists( list1, list2);
    // print(linkedList1);
    ListNode *linkedList1;
    linkedList1=new ListNode(1,new ListNode(2, new ListNode(5)));
    ListNode *linkedList2;
    linkedList2=new ListNode(1,new ListNode(3,new ListNode(4)));

    


}