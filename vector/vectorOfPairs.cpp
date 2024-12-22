#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>>v;

    v.push_back({1,2});

    v.emplace_back(3,4);

    v.emplace_back(5,6);


    cout<<"All index first value: ";
    for(int i=0;i<3;i++)
    {
        cout<<v[i].first<<" ";
    }

    cout<<endl;

    cout<<"All index second value: ";
    for(int i=0;i<3;i++)
    {
        cout<<v[i].second<<" ";
    }

    return 0;
}