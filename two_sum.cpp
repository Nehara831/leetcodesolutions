#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    map<int, int> nums_check;
    int check;
    int i=0;
    vector<int> result;
    check=target-nums[i];
    bool flag=true;
    while(flag)
    {   check=target-nums[i];
        if(nums_check.find(check)!= nums_check.end())
        {
        result.push_back(i);
        int it=nums_check[check];
        result.push_back(it);
        flag=false;
        }
        else
        {
            nums_check[nums[i]]=i;
        }
    
     i++;
    }
    
    return result;
}
int main(){
    vector<int>nums={2,3,5,7};
    int target=8;
    vector<int> result=twoSum(nums,target);
    for(int i=0;i<size(result);i++)
    {
        cout<<result[i]<<endl;
    }

}





















