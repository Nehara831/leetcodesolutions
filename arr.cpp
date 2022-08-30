#include <string.h>
#include <stdio.h>
#include<iostream>
using namespace std;




int main(){
    int add[]={};
    for (int i=0;i<5;++i){
        add[i]=i;
    }
    for (int i=0;i<5;++i){
        cout<<add[i]<<endl;
    }
}