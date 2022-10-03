#include <string.h>
#include <stdio.h>
#include<iostream>
#include<vector>
#include <iterator> 
#include <map> 
#include<queue>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
};
int coun=0;
int countMax=0;
vector<int> nums;
int maxDepth(TreeNode* root) { 
    int c=coun;
    int cm=countMax;
    coun++;
    if(coun>=countMax){
        countMax=coun;
    }
    
    if (root->left == nullptr && root->right==NULL)
     { return coun;        
    }
    
    if(root->left!=NULL){
    maxDepth(root->left);
    coun--;}
    if(root->right!=NULL){
    maxDepth(root->right);
    coun--;
    }
    //int max=*max_element(nums.begin(), nums.end());
    return countMax;
}
TreeNode* createNode(int data){
     TreeNode* root=new TreeNode();
     root->data=data;
     root->left=NULL;
     root->right=NULL;
     return root;
}
int main()
{
    //Level 1
    TreeNode* root = createNode(25); 
    //Level 2
    root->left = createNode(15);
    root->right = createNode(50);
    //Level 3
     root->left->left = createNode(10);
     root->left->right = createNode(22);
    root->right->left = createNode(35);
    root->right->right=createNode(64);
        //Level 4
    root->left->right->left = createNode(18);
    root->left->right->right = createNode(24);
    root->right->right->left = createNode(66);
    root->right->right->right=createNode(90);
    root->left->left->left = createNode(4);
    root->left->left->right=createNode(12);
    root->right->left->right=createNode(44);
    cout<<maxDepth(root);
    //cout<<printNode(root);
    // for(int i=0;i<size(nums);i++){
    //     cout<<nums[i]<<" ";
    // }
}

