#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int>maxHeap;

    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(30);
    maxHeap.push(100);
    maxHeap.emplace(40);

    // after pushing 100, the front element would be 100 in priority queue;
    cout<<"The largest element in the queue is: "<<maxHeap.top()<<endl;

    // popping first element in pq;
    maxHeap.pop();

    // traversing over the pq; NOTE: IT WILL PRINT THE ELEMENTS IN THE DESCEDING SORTED ORDER;
    cout<<"The elements in the max heap or priority queue is are: ";
    while(!maxHeap.empty())
    {
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    cout<<endl;

    cout<<"Size of the queue is: "<<maxHeap.size()<<endl;

    return 0;
}