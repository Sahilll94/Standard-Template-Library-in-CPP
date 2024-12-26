#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(int a, int b)
{
    return a>b;
}

int main()
{
    vector<int>v;

    int n;
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v.push_back(input);
    }


    sort(v.begin(),v.end(),comp);

    for(auto i : v)
    {
        cout<<i<<" ";
    }


    return 0;
}