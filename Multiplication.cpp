#include <iostream>
#include <vector>
#include <string.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{    
    int arr[]={2,4,5,6};
     vector<int>nums;
    for(int j=sizeof(arr)/sizeof(arr[0])-1;j>=0;j--)
    {   int index=j;
        int m=1;    
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {   if(j!=i)
    {   
        m=m*arr[i]; 
    }           
    }   
    nums.push_back(m);
    }  
    for(int i=0;i<size(nums);i++){
        cout<<nums[i]<<endl;
    }
    
}