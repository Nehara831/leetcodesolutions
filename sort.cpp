#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    vector<int>nums={1,3,2,9,4,};

    map<int, int> map1;
for(int i=0;i<nums.size();i++){
    //cout<<i<<endl;
    map1[nums[i]]=i;
    //cout<<endl;
}
for(int j=0;j<nums.size();j++){
    //cout<<endl;
    //cout<<nums[j];
    
    cout<<nums[j]<<"= "<<map1[nums[j]]<<endl;

}


}