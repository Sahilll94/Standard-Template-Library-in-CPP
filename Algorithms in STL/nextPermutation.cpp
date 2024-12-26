#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s = "sahil";
    
    do
    {
        cout<<s<<endl;
    } while(next_permutation(s.begin(),s.end()));

    return 0;
    
}