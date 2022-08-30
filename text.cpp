#include <iostream>
#include <vector>
#include <map>
using namespace std;
//1,8,6,2,5,4,8,3,7
int maxArea(vector<int>& height) {
        int max_area=0;
        int area;
        int h;
        for (int i=0;i<height.size()-1;i++)
        {   
             if( height[i]<=height[height.size()-i-1])
             {   h=height[i]; 
                 
             }  
            else
             {
                 h=height[height.size()-i-1];  
             }
                          
                          
             if (i<height.size()-1-i)
             {    
                  area=(height.size()-1-i)*h;
                  
             }
            else 
            {
             
                  area=(i+1-height.size())*h;
                 
            }
        if (area>max_area)
        {
                     max_area=area;
        }  
        }
           
            return max_area;       
        }
            
        

int main() {
  vector <int> heights={1,8,6,2,5,4,8,3,7};
cout<<maxArea(heights);
  return 0;
}