#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s)
    {
        string palindrome="";
        string maximum_length="";
        maximum_length=maximum_length+s[0];
        int l=s.length();
        int k;
        int test_var1;
        int test_var2;
        int c=count(s.begin(), s.end(), s[0]);
        if(s.length()==c){
                maximum_length=s;
                return maximum_length;
            }
        if(s.length()==1){
                maximum_length=s;
                return maximum_length;
            }
          
        for(int i=0;i<l-1;i++){
            if (i==0){
            if(s[i+1]==s[i]){
                palindrome=palindrome+s[i]+s[i+1];
                maximum_length=palindrome;
                palindrome="";
            }                                                                   //aa aa aa
           }
           else if(s[i+1]==s[i-1]){
            bool Flag=true;
                int k=1;
                palindrome=palindrome+s[i];
                while (Flag)  //cbcacbe
                {    test_var1=i+k;
                     test_var2=i-k;
                if ((test_var1<=l-1)&& (test_var2>=0)){
                    char test1=s[i-k];
                    char test2=s[i+k];
                if ((s[i-k]==s[i+k]) && ((i-k)>=0))                         //aa a aa
                    { palindrome=s[i-k]+palindrome+s[i+k];
                        k++;
                    }
                else
                {  Flag=false;
                }
                }
                else{Flag=false;}
                if (palindrome.length()>maximum_length.length()){
                    maximum_length= palindrome;
                    }    
                }
                palindrome="";
         }
           }          
        for(int i=0;i<l-1;i++){
            if (i!=0){
            if (s[i+1]==s[i])
            {   bool Flag=true;
                    k=1;
                palindrome=palindrome+s[i]+s[i+1];
                while (Flag)
                {    test_var1=i+k+1;
                     test_var2=i-k;
                    if ((test_var1<=l-1)&& (test_var2>=0)){
                if (s[i-k]==s[i+1+k])
                    {
                        palindrome=s[i-k]+palindrome+s[i+1+k];
                        k++;
                    }
                else
                {
                    Flag=false;    
                }
                }
                else{
                    Flag=false;
                }
if (palindrome.length()>maximum_length.length()){
                        maximum_length= palindrome;                       
                    }                   
                }
                palindrome="";
            }          
palindrome="";   
             }  }
             
        return(maximum_length);
        
    }
    int main(){
        string s="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        string result= longestPalindrome(s);
        cout<<result;
    }