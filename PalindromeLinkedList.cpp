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
ListNode* isPalindrome(ListNode* head)
{  ListNode* check=head;
    ListNode* checkNext=head;
    int count=1;
    ListNode* result=check;
    while(checkNext->next!=NULL)
    {   
          checkNext=checkNext->next->next;
            check=check->next;
       
    }
    if(count%2==0)
    {
        //check=check->next;
        check->next=NULL;
        
    }
    else{
        check->next=NULL;
    }
    
    // else
    // {
    //     cout<<check->val<<endl;
    // }
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
    first->val=3;
    first->next=second;
    second->val=4;
    second->next=third;
    third->val=44;
    third->next=last;
    // fourth->val=44;
    // fourth->next=last;
    last->val=1;
    last->next=list2;
     list2->val=3;
     list2->next=fir;
    fir->val=4;
    fir->next=NULL;
    // seco->val=5;
    // seco->next=thi;
    // thi->val=5;
    // thi->next=fourt;
    // fourt->val=6;
    // fourt->next=NULL;
    
    ListNode* list11=isPalindrome(list1);
    print(list11);
}