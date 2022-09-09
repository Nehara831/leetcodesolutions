#include <iostream>
#include <vector>
#include <map>
using namespace std;
//int lengthOfLongestSubstring(string s) {
string longestPalindrome(string s)
    {
        //cbbd
        string palindrome="";
        string maximum_length="";
        int l=s.length();
        int k,n;
        if(s.length()==1){
                maximum_length=s;
                return maximum_length;
            }
        for(int i=0;i<l;++i){
            
            if((s[i+1]==s[i])&&(i==0)){
                palindrome=palindrome+s[i]+s[i+1];
                maximum_length=palindrome;
            }
            else if (((s[i+1]==s[i])&&(i!=0))&&(!((s[i+1]==s[i-1])&&(s[i+1]==s[i]))))
            {
                bool Flag=true;
                
                    k=1;
                
                palindrome=palindrome+s[i]+s[i+1];
                while (Flag)
                { 
                    int test_var1=i+k+1;
                    int test_var2=i-k;
                if ((s[i-k]==s[i+1+k]) &&((i-k)>=0))
                    {
                        palindrome=s[i-k]+palindrome+s[i+1+k];
                        k++;
                    }
                else
                {
                    Flag=false;
                    //i=i+k;
                    if (palindrome.length()>maximum_length.length()){
                        maximum_length= palindrome;
                        
                    }
                    palindrome="";
                }
                }
            }
            
            else if((s[i+1]==s[i-1])||((s[i+1]==s[i-1])&&(s[i+1]==s[i])))
            {
                bool Flag=true;
                int k=1;
                palindrome=palindrome+s[i];
                while (Flag)  //cbcacbe
                {
                if ((s[i-k]==s[i+k]) && ((i-k)>=0))
                    {
                        palindrome=s[i-k]+palindrome+s[i+k];
                        k++;

                    }
                else
                {
                    Flag=false;
                    
                    if (palindrome.length()>maximum_length.length()){
                    maximum_length= palindrome;
                    
                    }
                    palindrome="";
                }
                }

            }
        palindrome="";   
        }
        return(maximum_length);
        
        
    }
int main(){
    cout<<longestPalindrome("cbbd");
}