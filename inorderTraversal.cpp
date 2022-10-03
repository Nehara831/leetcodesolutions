#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<stack>
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
int sum=0;
int sumLeft=0;
void sumNode(TreeNode* root) {
    if (root== nullptr) {
        cout<<sum<<endl;      
    }
    else{
    sum=sum+root->data;
    sumLeft+=root->data;
    sumNode(root->left);
    if(root->left!=NULL){
        //sum=sum-root->left->data;
    }
    sum-=sumLeft;
    sumLeft=0;
    sumNode(root->right);
    }
    
}
int nums=0;
int   printNode(TreeNode* root){
    if (root==NULL){       
        return 0;
    }
    //nums.push_back(root->data);     
    nums=+ root->data; 
    printNode(root->left) ;
    printNode(root->right);
    return nums;
}
void pathSum(TreeNode* root){
    stack <TreeNode*> stack1;
    TreeNode* current=root;
    int sum;
    while(!(stack1.empty())|| root!=NULL){
        while((current!=NULL)){
            stack1.push(current);   
            current=current->left;
        }
        current=stack1.top();
        cout<<current->data;
        stack1.pop();
        current=current->right;
        //root=current->right;       
    }
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
    pathSum(root);
    //cout<<printNode(root);
    // for(int i=0;i<size(nums);i++){
    //     cout<<nums[i]<<" ";
    // }
}