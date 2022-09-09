#include <iostream>
#include <vector>
#include <map>
using namespace std;
//int lengthOfLongestSubstring(string s) {
    int main(){
        string s="kabccbaiabba";
        
        
        int l=s.length();
        int i,j,len,n,len2,l2;
        //for(i=1;i<l;++i)
        //{ 
            
           /* num=num+s[i];
            l2=num.length();
            for(j=l2-1;j>=0;--j)
            {   
                num2=num2+num[j];
            } 
            
            for(int k=0;k<num.length();++k)
            {   
                cout<<num[k];
            }     
            cout<<"   ";
            
            for(int h=0;h<num2.length();++h)
            {   
                cout<<num2[h];
            }
            cout<<endl;
            if (num ==num2){
                if (num.length()>longest_sub.length()){
                longest_sub=num;
            }}
            num2="";        
        
            
        }


    /*for (int g=0;g<longest_sub.length();++g){
            cout<<longest_sub[g];
        }


    } 
    */
if (l%2==0)
{
    for (i=0;i<=(l/2-1);++i)
    {
        if (s[i]!=s[l-1-i])
        {s[i]=' ';
            s[l-1-i]=' ';
            
        }
        /*else{
            s[i]=' ';
            s[l-1-i]=' ';

        }
*/
    }
//}
    }
    else{
        int c=l/2;
        for (int i=1;i<=c;++i){
            if (s[c-i]!=s[c+i])
        {
            s[c-i]=' ';
            s[c+i]=' ';
        }
        /*else{
            s[c-i]=' ';
            s[c+i]=' ';
        }
*/
        }



    }
  for(int k=0;k<s.length();++k)
            {   
                cout<<s[k];
            }       
    }