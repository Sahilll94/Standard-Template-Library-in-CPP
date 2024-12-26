#include<iostream>
#include<map>
using namespace std;

int main()
{
    // KEY:VALUE pair where map is sorted with respect to the KEY where key is UNIQUE;
    map<int,int>mp;

    // insertion in map;

    mp[1] = 2;  // {1,2} in map as 1 -> key, 2 -> value;
    mp.insert({2,3});
    mp.emplace(4,5); // {1,2} then {2,3} then {4,5}
    mp.emplace(3,8); // {1,2} then [2,3] then {3,8} then {4,5} SORTED as per key;

    // To update a key's value
    mp[3] = 9; // It will update the value of key -> 3 with value 9 .....  {1,2} then {2,3} then {3,9} then {4,5}

    // accessing key and value using first and second;
    for(auto i : mp)
    {
        cout<<"Key: "<<i.first<<" Value: "<<i.second<<endl;
    }

    auto it = mp.lower_bound(2); //If 2 key is present then it will return it's index;

    cout<<it->first<<" ";
    cout<<it->second<<endl;

    auto i = mp.upper_bound(2);

    cout<<i->first<<" ";
    cout<<i->second;

    return 0;
}