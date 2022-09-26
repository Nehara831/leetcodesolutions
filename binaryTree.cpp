#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
int main(){
    Node* root=createNode(10);
    
}
