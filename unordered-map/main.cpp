#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // Not sorted but unique keys;
    unordered_map<int,int>mp;

    mp[1] = 2;
    mp.insert({1,2});
    mp.insert({3,1});
    mp.insert({2,4});
    mp.emplace(7,10);
    mp.emplace(9,1);

    cout<<"the keys and values in the map is -> "<<endl;
    for(auto it:mp)
    {
        cout<<"Key: "<<it.first<<" Value: "<<it.second<<endl;
    }

    return 0;
}