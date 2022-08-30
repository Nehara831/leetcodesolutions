#include <string.h>
#include <stdio.h>
#include<iostream>
#include<vector>
#include <iterator> 
#include <map> 
using namespace std;

//bool isValid(string s)
int main()

{   string s="{}([])";
    map<char, int> parenthesis;
    parenthesis['(']= 1; 
    parenthesis['{']= 2; 
    parenthesis['[']= 3; 
    parenthesis[']']= 4; 
    parenthesis['}']= 5; 
    parenthesis[')'] =6;
    int index[s.length()];
    for (int i=0;i<=(s.length()-1);++i)
    {
        index[i]=parenthesis[s[i]];
    }
    /*
    for (int j=0;j<=(s.length()-1);++j)
    {
        cout<<s[j]<<"="<<index[j]<<endl;
    }
    */
   int n=0,ele_2,ele_1,j=0;
   for (int i=0;i<=(s.length()-1);++i)
    { ele_1=index[j];
        if (index[j+1]==0)
    {
        ele_2=index[j+1+2*n];

    }
    else
    {
        ele_2=index[j+1];
    } 
        if (ele_1+ele_2==7)
        {
            s[j]='*';
            index[j]=0;
            if (ele_2==index[j+1+2*n]){
                s[j+1+2*n]='*';
                index[j+1+2*n]=0;
            }
            else{
                s[1+j]='*';
                index[j+1]=0;
                }
            
            
            j=j-1;
            n++;
            if ((j>=0) && index[j]!=0)
            {   if (index[j+1+2*n]==0)
                    {
                    n=n-1;
                    }
                
                
            }
            else if ((j>=0) && index[j]==0)
            {   n--;
                j=j+1+2*(n);
            }
            else
            {
                
                j=j+1+2*n;
            }
        }
        
        else{
            j=j+1;
            
        }
    }
    for (int j=0;j<=(s.length()-1);++j)
    {
        cout<<s[j]<<endl;
    }

}







