//int reverse(int x) 
#include <iostream>  
#include<string>
#include<sstream>
#include <math.h>
   
using namespace std;  
int reverse(int x)
{   char c;
    string str= to_string(x);
    if(str.size()==1){
        return x;
    }
    if (x<0){
        str=str.substr(1,str.size());
    }
    for(int i=0;i<str.size()/2;i++)
    { c=str[i];
      str[i]=str[str.size()-i-1];
      str[str.size()-i-1]=c;
    }
    if(x<0){
        str="-"+str;
    }
    stringstream ss;  
    ss<<str;  
    ss>>x;//[-231, 231 - 1]
    if ((pow(-2,31)<x) && (x<(pow(2,31))-1)) {
    return x; }
    else{
        return 0;
    }      
        
    }
    int main(){
       cout<<reverse(123)<<endl;
       //cout<<(2^31)<<endl;
     

    }