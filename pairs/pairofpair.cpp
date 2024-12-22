#include<iostream>
using namespace std;

int main()
{
    pair<int,pair<int,int>>p;
    
    p = {2,{4,8}};

    cout<<"First: "<<p.first<<endl;

    cout<<"Second's first: "<<p.second.first<<endl;

    cout<<"Second's second: "<<p.second.second<<endl;

    return 0;
}