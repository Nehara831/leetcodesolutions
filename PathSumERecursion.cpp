#include<iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int pathsum =0;
bool hasPath = false;

bool hasPathSum (TreeNode* root,int target) {
    int* sum = &pathsum;

    if (root == NULL){
        return 0;
    }

    pathsum= pathsum+root->val;

    if(root->left == NULL && root->right ==NULL){
        if(pathsum == target){
            hasPath = true;
        }
        return root->val;
    }

    int valLeft = hasPathSum(root->left,target);

    pathsum = pathsum - valLeft;

    int valRight = hasPathSum(root->right,target);

    pathsum = pathsum - valRight;

    return root->val;

}