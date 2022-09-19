#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int target;
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> check_res;
    if(nums.size()==3 && nums[0] +nums[1] + nums[2]==0)
    {vector<int> res;
       result.push_back(res);
        return result; 
    }
    if ((nums[0] == 0) && (nums[1] == 0) && (nums[2] == 0))
    {
        vector<int> res;
        res.push_back(nums[0]);
        res.push_back(nums[1]);
        res.push_back(nums[2]);
        result.push_back(res);
        return result;
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        
        bool flag = true;
        if (nums[i- 1] == nums[i]&& i>0)
        { continue;
        }
        else{
            int k = nums.size() - 1;
            int j = i + 1;
        
            while (flag)
            {   vector<int> res;
                if (nums[i] + nums[j] + nums[k] == 0)
                { 
                    if ((i != j) && (i != k) && (j != k))
                    {                      
                        res.push_back(nums[i]);                       
                        res.push_back(nums[j]);                     
                        res.push_back(nums[k]);                       
                    }
                }
                if (nums[i] + nums[j] + nums[k]< 0)
                {   j++;
                   
                }
                else
                {   
                     k--;

                }
                if ((j>=k) )
                {
                    flag = false;
                }
                if (res.size() == 3)
                {   
                        while(nums[k]==nums[k-1]){
                        k--;
               }
                  result.push_back(res);  
                    
                }
            }
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {-2,-2,0,2,2};
    vector<vector<int>> num = threeSum(nums);
    for (int i = 0; i < num.size(); i++)
    {
        vector<int> num1 = num[i];
        for (int j = 0; j < 3; j++)
        {

            cout << num1[j];
        }
        cout << endl;
    }
}
