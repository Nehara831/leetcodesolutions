#include <iostream>
#include <vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std; int target;
vector<vector<int>> threeSum(vector<int>& nums) 
    {   vector<vector<int>> final_result;
        vector<int> check_result;
        //vector<int> check_result1;
        for(int j=0;j<nums.size();j++)
        {   int target=0-nums[j];
            map<int, int> nums_check;
            vector<int> result;
            int check;
            int i=0;
            check=target-nums[i];
            bool flag=true;
            bool add=false;
            while(flag)
            {   check=target-nums[i];
                if((i!=j)&&(i!=nums_check[check])&&(j!=nums_check[check]))
                {
                if(nums_check.find(check)!= nums_check.end())
                {   if (!(( find(check_result.begin(), check_result.end(), nums[i]) != check_result.end() )&& ( find(check_result.begin(), check_result.end(), nums[j]) != check_result.end() )&&( find(check_result.begin(), check_result.end(),check) != check_result.end() )))
                    {
                        result.push_back(nums[i]);
                        check_result.push_back(nums[i]);
                        result.push_back(nums[j]);
                        check_result.push_back(nums[j]);
                        result.push_back(check);
                        check_result.push_back(check);
                        add = true;

                    }
                    flag=false;
                }
                else
                {
                    nums_check[nums[i]]=i;
                }
            }

               i++;
               if(i>= nums.size()){
                   flag=false;
               }
            }
            if(add){
                final_result.push_back(result); 
            }
  

        }
    return final_result;
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
/*if(!((find(nums.begin(), nums.end(), -5) != nums.end())&&(find(nums.begin(), nums.end(), -2) != nums.end())&&(find(nums.begin(), nums.end(),-4) != nums.end()))){
    cout<<"found";
}*/
}

