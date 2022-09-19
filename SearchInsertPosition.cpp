#include<iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
      map<int, int> index;
      for(int i=0;i<nums.size();i++){
        index[nums[i]]=i;
      }
      if( find(nums.begin(), nums.end(), target) != nums.end() ){
      return(index[target]);}
      else{
        int i=nums.size()-1;
        while(nums[i]>target && i>0){
            i--;
        }
        if (i==0 && target<nums[0]){
            return 0;
        }
        else{
             return index[nums[i]] +1;
        }
        
       
      }   
    }
int main(){

    vector<int>nums ={1,3,5,6};
    cout<<searchInsert(nums,3);

}
/*

*/