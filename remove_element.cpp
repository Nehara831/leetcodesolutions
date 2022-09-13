#include <iostream>
#include <vector>

using namespace std;
int removeDuplicates(vector<int>& nums,int val)


{ 
    int l=size(nums);
    int i,c=0,count=0;
    if(l==1){
        return 1;
        nums.clear();
    }
    for(i=0;i<l>0;i++)
    {    
            if(nums[i]==val){
                
                nums[i]=nums[c];
                
                nums[c]=val;
                c++;
            }
            else{
                count++;
            }   
    }
    int c1;
    for(int i=0;i<l/2;i++){
        c1=nums[i];
        nums[i]=nums[l-1-i];
        nums[l-i-1]=c1;

    }
   return count; 

}

int main(){
    vector<int> nums={0,1,2,2,3,0,4,2};
    int val=2;
    cout<<removeDuplicates(nums,val);

}