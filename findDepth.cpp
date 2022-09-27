#include <stdio.h>
#include<iostream>
#include<queue>
#include<math.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

};
int findDepth(TreeNode* root){
    queue<TreeNode*> myque;
    myque.push(root);
    int count=0;
    while(!myque.empty())
    {   root=myque.front();
            count++;               
            myque.pop();
            if(root->left!=NULL){
            myque.push(root->left);}
            if(root->right!=NULL){
            myque.push(root->right);}    
    }
    int result=0;
for(int i=0;i<count;i++){
    if(count>=pow(2,i) && count<pow(2,i+1)){
        result=i+1;
        break;    
    }
}
return result;
}
TreeNode* createNode(int data) {
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
int main()
{
    //Level 1
    TreeNode* root = createNode(1);
    //Level 2
    root->left = createNode(2);
    root->right = NULL;
    //Level 3
     root->left->left = createNode(3);
     root->left->right = NULL;
    // root->right->left = createNode(6);
    // root->right->right = createNode(7);
    // //Level 4
    // root->left->right->left = createNode(9);
    // root->right->right->left = createNode(15);
    root->left->left->left = createNode(9);
    root->left->left->right=NULL;
    root->left->left->left->left=createNode(10);
    root->left->left->left->right=NULL;
    //printTree(root);
    //queue<int> result=leftView(root);
    // while(!result.empty()){
    //     cout<<result.front()<<endl;
    //     result.pop();
    // }
    cout<<findDepth(root);
}