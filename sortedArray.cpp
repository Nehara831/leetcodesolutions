#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& nums)

{   //vector<int> nums={1,1,2,2,3,3,3,3,3,4};
    
    int l=size(nums);
    int i,c=1;
    if(l==1){
        return 1;
    }
    int current=nums[0];
    for(i=0;i<l-1;i++)
    {    
            if(nums[i+1]!=nums[i]){
                current=nums[i+1];
                c++;
                nums[c-1]=current;
            }    
    }
    return c;
       
    
  
    }
int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(nums);

}
