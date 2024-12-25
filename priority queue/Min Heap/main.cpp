#include<iostream>
#include<queue>
using namespace std;


int main()
{
    // declaration of min heap which simply sort the elements in a sorted ascending order where it uses non-linear data structure TREE;
    priority_queue<int,vector<int>,greater<int>>minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(1);
    minHeap.push(20);

    cout<<"Smallest element in the queue is: "<<minHeap.top()<<endl;

    // traversing over the min heap queue;
    cout<<"Elements in the min heap queue is: ";
    while(!minHeap.empty())
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    
    return 0;
}