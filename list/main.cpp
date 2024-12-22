#include<iostream>
#include<list>
using namespace std;

int main()
{
    // declaration
    list<int>ls;

    // Insertion from the ending
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.emplace_back(4);

    // Insertion from the beginning
    ls.push_front(5);
    ls.push_front(6);
    ls.push_front(7);
    ls.emplace_front(8);

    // 8 7 6 5 1 2 3 4

    int size = ls.size();


    // THIS RANDOM ACCESS METHOD WILL NOT WORK ON LIST FOR ACCESSING
    // cout<<"Elements in the list is: ";
    // for(int i=0;i<size;i++)
    // {
    //     cout<<ls[i]<<" ";
    // }


    // Accesing specific element;
    // list<int>::iterator it = ls.begin();
    auto it = ls.begin();
    advance(it,2);
    cout<<"Element at 3rd position is: "<<*it<<endl;


    cout<<"The elements in the list are: ";
    for(list<int>::iterator it = ls.begin(); it!=ls.end();it++)
    {
        cout<<*it<<" ";
    }


    return 0;
}