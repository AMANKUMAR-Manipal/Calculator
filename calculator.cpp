#include<iostream>
using namespace std;
int main(){
    int x,y;
    char ch;
     cout<<"enter the number:";
    cin>>x>>ch>>y;
    if(ch=='+'){
        cout<<x+y;
    }
    if(ch=='-'){
        cout<<x-y;
    }
    if(ch=='*'){
        cout<<x*y;
    }
    if(ch=='/'){
        cout<<x/y;
    }  
    }