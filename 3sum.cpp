#include <iostream>
#include <vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) 
{
    vector<vector<int>>nums3;
vector<int>nums2;
vector<int>nums4;
 
    for(int i=0;i<size(nums);i++)
    {   
        for (int j=0;j<size(nums);j++)
        {
            if(j!=i)
            {
                for (int k=0;k<size(nums);k++)
                {
            if(k!=i && k!=j)
            {   
                if(nums[i]+nums[j]+nums[k]==0){
                nums2.push_back(nums[i]);
                nums2.push_back(nums[j]);
                nums2.push_back(nums[k]);}
            }
            sort(nums2.begin(), nums2.end());

            if(size(nums2)>=3)
            {   nums3.push_back(nums2);
                nums2.clear();
                break;
            }
                }
            }

        }
    for(int i=0;i<size(nums3);i++){
        for(int j=i+1;i<size(nums3);j++){
           if (nums3[j]==nums3[i]){
                nums3;
           }
    }
    }
    
    }
    return nums3;
}
int main(){
vector<int>nums   ={-1,0,1,2,-1,-4};
vector<vector<int>> num=threeSum(nums);
for(int i=0;i<size(num);i++){
    for(int j=0;j<3;j++){
        cout<<(num[i])[j];

    }
 cout<<endl;   
}
}

