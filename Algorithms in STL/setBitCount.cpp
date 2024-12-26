#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int setBit = __builtin_popcount(n);

    cout<<"The number of occurences of set bit in binary representation of given number is: "<<setBit<<endl;


    long long m;
    cout<<"Enter long long number: ";
    cin>>m;

    // ll is extra here;
    int setbit = __builtin_popcountll(m);

    cout<<"The number of occurences of set bit in binary representation of given long long number is: "<<setbit<<endl;

    return 0;

}