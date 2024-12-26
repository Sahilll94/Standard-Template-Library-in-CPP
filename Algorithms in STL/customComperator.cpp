#include<iostream>
#include<algorithm>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2)
{
    if(p1.second < p2.second) return true;

    if(p1.second > p2.second) return false;

    if(p1.second == p2.second)
    {
        if(p1.first < p2.first) return true;
    }

    return false;
}

int main()
{
    pair<int,int>p[] = {{1,2},{2,1},{4,1}};

    // sort this pair wrt to it's second, and if two pairs second are same then sort it wrt to first;

    sort(p,p+3,comp);

    for(auto i : p)
    {
        cout<<"{ "<<i.first<<" : "<<i.second<<" }"<<endl;
    }

    return 0;
}