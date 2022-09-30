#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

bool  isPalindrome(string str){
    if(str.front()!=str.back()){
        return false;
    }
    else if (str.length()<=2){
        return true;
    }
    return ( true && isPalindrome(str.substr(str.length()-str.length()+1,str.length()-2)));
}
int main(){

    string str="aabaaa";
    cout<<isPalindrome(str);
}