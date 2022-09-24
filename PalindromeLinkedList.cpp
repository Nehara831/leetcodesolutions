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
void isPalindrome(ListNode* head)
{  
    ListNode* temp=new ListNode();
    temp=head;    
    ListNode* check=temp;
    ListNode* checkNext=temp;
    
    ListNode* result=check;
    while(checkNext->next!=NULL)
    {   
        checkNext=checkNext->next->next;
        if(checkNext ==NULL){
            break;
        }
        check=check->next;
        
       
    }
    ListNode* reversedResult=reverse(check);


    
    
    while(result!=NULL){
        if(result->val==reversedResult->val){
            result=result->next;
            reversedResult=reversedResult->next;
            
        }
        else{
            break;
        }
    }
    if(result==NULL){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not a Palindrome Number";
    }

   
    

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
    first->val=3;
    first->next=second;
    second->val=5;
    second->next=third;
    third->val=3;
    third->next=last;
    last->val=1;
    last->next=NULL;
    //  list2->val=3;
    //  list2->next=fir;
    // fir->val=1;
    // fir->next=NULL;
    // seco->val=5;
    // seco->next=thi;
    // thi->val=5;
    // thi->next=fourt;
    // fourt->val=6;
    // fourt->next=NULL;
    // print(list1);
    // cout<<endl;
    isPalindrome(list1);
    // print(list11);
    // cout<<endl;
    // print(list1);
}