#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int countZero(vector<vector<int>>&matrix)
{
    int count = 0;

    for(auto i:matrix)
    {
        if(all_of(i.begin(),i.end(),[](int x) {return x==0;}))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n,m;

    cout<<"Enter the rows: ";
    cin>>n;

    cout<<"Enter the col: ";
    cin>>m;

    vector<vector<int>>mat(n,vector<int>(m));

    cout<<"Enter the elements in the 2-D Array: ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int Zeros = countZero(mat);

    cout<<"Number rows with all zeros: "<<Zeros;

    return 0;
}
