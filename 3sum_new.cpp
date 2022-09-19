#include<iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

//-4 -1 -1 0 1 2
// 0, 0, 0, 0
vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {};
        }
        sort(nums.begin(),nums.end());

        vector<vector<int>> answers;
        
        for(int i=0;i<nums.size()-2;i++){

            int j = i+1;
            int k = nums.size()-1;

            while(j<k){

                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> foundMatch = {nums[i],nums[j],nums[k]};
                    answers.push_back(foundMatch);
                    break;
                
                }

                if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }else{
                    k--;
                }

            }
           
                
        }
           
            
        
        
    
    
    return answers;
}

int main()
{
    vector<int>nums={-1,0,1,2,-1,-4}; //1 3 4 5 6
    //int target=5;
    vector<vector<int>> result= threeSum(nums);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<3;j++){
            cout<<result[i][j]<<",";
        }
        cout<<" "<<endl;
        
    }
    

}