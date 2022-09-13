#include <iostream>
#include <vector>
using namespace std;
int strStr(string haystack, string needle)
   
{ 
     string check="";
     string check2="";
     int l,c=-1,count=0;
     l=needle.size();
     if(haystack.size()==1 &&(haystack==needle)){
      return 0;
     }
    for(int i=0;i<haystack.size();i++)
    { if(i+l<=haystack.size())
    { c=i;
      check=haystack.substr(i,i+l);
      for(int j=0;j<l;j++)
      {
        check2=check2+check[j];
      }
      if(check2==needle)
      { count++;
        break;
      }
      check2="";
    }
  }
if((c==haystack.size()-l && (count==0))||c==-1){
  return -1;
}
else{
  return c;
}
}
int main(){
string haystack="aaa";
string needle="aaaa";
cout<<strStr(haystack,needle);

}





