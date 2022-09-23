#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{
string s="2+(3-1)*3";
int num=0;
string ope="()/*+-";
for(int i=size(s)-1;i>=0;i--)
{
    if(s[i+1]=='*')
    {
        num=num+s[i];
    }
}
}
