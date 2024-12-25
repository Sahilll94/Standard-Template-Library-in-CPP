#include<iostream>
#include<queue>  //Header file for queue
using namespace std;


int main()
{
    // declaration;
    queue<int>q;

    // pushing elements in the queue;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.emplace(50);


    // deleting the elements but remember pop function will delete elements from the start;
    q.pop();

    // to print the first element;
    cout<<"First element in the queue is: "<<q.front()<<endl;

    // to print the last element;
    cout<<"Last element in the queue is: "<<q.back()<<endl;

    cout<<"The size of the queue before popping all the elements is: "<<q.size()<<endl;


    // traversing in the queue;
    cout<<"the elements in the queue is: ";
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        // use another queue to store the lost elements;
        q.pop();
    }
    cout<<endl;


    cout<<"The size of the queue after popping all the elements is: "<<q.size()<<endl;


    return 0;
}