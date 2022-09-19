#include <iostream>
#include <vector>
#include <map>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
int min=strs[0].size();
    for(int i=1;i<strs.size();i++)
{   if (strs[i].size()<min){
    min=strs[i].size();
}

}    
string ss="";
    int count;bool flag=true;
    if(strs.size()==1)
    {    return strs[0];
    }
    
    
    else {
    for (int j=0;j<min;j++){
        for(int i=1;i<strs.size();i++){
            if((strs[i-1][j])!=strs[i][j]){
                flag=false;
                break;

            }
            count=i;
        }
        if(count==strs.size()-1 && flag){
            ss=ss+strs[count][j];
        }
    }
    return ss;}
    

    }
int main(){
    vector<string>strs={"",""};
    
    cout<<longestCommonPrefix(strs);
}

