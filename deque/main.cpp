#include<iostream>
#include<deque>
using namespace std;


int main()
{
    // Declaration of deque;
    deque<int>dq;

    // inserting from back in dq';
    dq.push_back(10);
    dq.emplace_back(20);

    // inserting from front;
    dq.push_front(30);
    dq.emplace_front(40);

    // 40 30 10 20

    // deleting
    dq.pop_back();
    dq.pop_front();

    // accessing specific element;
    auto it = dq.begin();
    advance(it,2);
    cout<<*(it)<<endl;

    // accessing all elements;
    cout<<"The elements in the deque: ";
    for(auto it = dq.begin(); it!=dq.end();it++)
    {
        cout<<*(it)<<" ";

        if(it==dq.end()-1)
        {
            cout<<endl;
        }
    }


    cout<<"Size of the deque: "<<dq.size()<<endl;

    return 0;
}