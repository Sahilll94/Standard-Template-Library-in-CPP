#include<iostream>
#include<vector>
using namespace std;

int main()
{

    // ERASE FUNCTION;

    vector<int>v = {1,2,3,4,5,6};
    
    // v.begin() -> 0 index
    // v.erase(inclusive,exclusive) means it will exclude the right side value and will delete from inclusive till mentioned element but not that mentioned element;
    // v.erase[inclusive,exclusive)
    v.erase(v.begin()+1,v.begin()+2);

    cout<<"The elements in the vector 'v' using iterators: ";
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;


    // INSERT FUNCTION;
    
    vector<int>v1 = {10,20,30,40,50};

    // suppose, you want to add 0 before 10 then?
    v1.insert(v1.begin(),0);

    // 0 10 20 30 40 50

    // supoose, you want to add 25 before 30 then?
    v1.insert(v1.begin()+3,25);

    //  0 10 20 25 30 40 50
    
    // suppose, you want to add 35 before 40 then?
    v1.insert(v1.begin()+5,35);

    //  0 10 20 25 30 35 40 50

    // suppose, you want to add 2 multiples(occurences) of 45 before 50;
    v1.insert(v1.begin()+7,2,45);


    cout<<"The elements in the vector 'v1' using iterators: ";
    for(vector<int>::iterator it = v1.begin(); it!=v1.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    cout<<endl;

    vector<int>v3(2,50);
    vector<int>v4 = {10,20,30,40};

    // Suppose, I want to insert v3 vector before 30 in v4 vector then?
    v4.insert(v4.begin()+2,v3.begin(),v3.end());

    cout<<"The elements in the vector 'v4' using iterators: ";
    for(vector<int>::iterator it = v4.begin(); it!=v4.end(); it++)
    {
        cout<<*(it)<<" ";
    }

    return 0;
}