#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    int i=0;
    int j=nums.size()-1;
    vector <int> result;
    unordered_map<int, int> map1;
    for(int i=0;i<nums.size();i++){
        map1[nums[i]]=i;
    }
    sort(nums.begin(), nums.end());
    bool flag = true;
    while(nums[i]+nums[j]!=target){
        if(i==j){
            flag = false;
            break;
        }
        if(nums[i]+nums[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    if(flag){
        result.push_back(nums[i]);
        result.push_back(nums[j]);
    }

    return result;

}
int main()
{
    vector<int>nums={3,4,2,6,3,2}; //1 3 4 5 6
    int target=4;
    vector<int> result= twoSum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    

}