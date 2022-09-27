#include <string.h>
#include <stdio.h>
#include<iostream>
#include<vector>
#include <iterator> 
#include <map> 
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
queue<int> leftView(Node *root)
{   queue< Node*> myqueue;
    queue< int> myqueue_left;

    myqueue.push(root);
    myqueue_left.push(root->data);

    while(! myqueue.empty())
    {
        root=myqueue.front();
        //cout<<root->data<<endl;
        myqueue.pop();
        if(root->left!=NULL){
            myqueue.push(root->left);
            myqueue_left.push(root->left->data);
        }
        if(root->right!=NULL)
        {
            myqueue.push(root->right);
            }
        

    }
return myqueue_left;
}
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTree(Node* root) {
    if (root == nullptr) return;

    //preorder algorithm (D,L,R)
    cout << root->data << endl;
    printTree(root->left);
    printTree(root->right);
}
  
    

int main()
{
    //Level 1
    Node* root = createNode(1);
    //Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    //Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    //Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    //printTree(root);
    queue<int> result=leftView(root);
    while(!result.empty()){
        cout<<result.front()<<endl;
        result.pop();
    }
}



