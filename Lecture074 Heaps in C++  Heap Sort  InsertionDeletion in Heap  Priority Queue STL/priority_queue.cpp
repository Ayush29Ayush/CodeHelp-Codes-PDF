#include<bits/stdc++.h>
using namespace std;

int main()
{
    //! Uses Max-heap by default
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(3);
    pq.push(5);

    cout<<"Top element : "<<pq.top()<<endl;

    pq.pop();

    cout<<"Top element : "<<pq.top()<<endl;

    cout<<"Size now is -> "<<pq.size()<<endl;

    if(pq.empty())
    {
        cout<<"pq is now empty";
    }
    else{
        cout<<"pq is not empty";
    }

    cout<<endl<<endl<<endl<<endl;

    //! Using Min-heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(3);
    minheap.push(5);

    cout<<"Top element : "<<minheap.top()<<endl;

    minheap.pop();

    cout<<"Top element : "<<minheap.top()<<endl;

    cout<<"Size now is -> "<<minheap.size()<<endl;

    if(minheap.empty())
    {
        cout<<"minheap is now empty";
    }
    else{
        cout<<"minheap is not empty";
    }

    return 0;
}