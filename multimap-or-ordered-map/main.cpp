#include<iostream>
#include<map>
using namespace std;

int main()
{
    // Multiple duplicates of key possible but sorted order as per key;
    multimap<int,int>mp;

    mp.insert({1,4});
    mp.insert({1,9});
    mp.insert({3,11});
    mp.emplace(1,11);
    mp.insert({2,9});
    mp.insert({3,9});

    cout<<"Key and values in the multimap is: "<<endl;
    for(auto it:mp)
    {
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }

    return 0;
}