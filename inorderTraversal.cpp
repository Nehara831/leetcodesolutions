#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
    int data;
    TreeNode* right;
    TreeNode* left;
};
TreeNode* createNode(int data){
     TreeNode* root=new TreeNode();
     root->data=data;
     root->left=NULL;
     root->right=NULL;
     return root;
}
vector<int> printNode(TreeNode* root,vector <int> nums){
    if (root->left==NULL){
        nums.push_back(root->data);
        return ;
    }
    if (root->right==NULL){
        nums.push_back(root->data);
        return nums;
    }
    printNode(root->left,nums);
    //cout<<root->data<< " ";
    nums.push_back(root->data);
    printNode(root->right,nums);
    return nums;
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
    root->right->right = createNode(70);
    //Level 4
    root->left->right->left = createNode(18);
    root->left->right->right = createNode(24);
    root->right->right->left = createNode(66);
    root->right->right->right=createNode(90);
    root->left->left->left = createNode(4);
    root->left->left->right=createNode(12);
    root->right->left->right=createNode(44);
    root->right->left->left=createNode(31);
    vector<int > nums;
    vector<int >nums2=printNode(root,nums);
    for(int i=0;i<size(nums2);i++){
        cout<<nums2[i]<<" ";
    }
}