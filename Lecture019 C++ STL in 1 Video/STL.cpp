#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

using namespace std;

int main()
{

    //! Array - Static array(size of array is fixed and non expandable)
    //! if size of array is 3 then jesse hi fourth element input mein ayega, it will give error

    // int basic[3] = {1,2,3};

    // array<int,4> a = {1,2,3,4};

    // int size = a.size();

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<a[i]<<endl;
    // }

    // cout<<"Element at 2nd index is : "<<a.at(2)<<endl;
    // cout<<"Empty or not -> "<<a.empty()<<endl;

    // cout<<"First or Front Element : "<<a.front()<<endl;
    // cout<<"Last or Back Element : "<<a.back()<<endl;

    //! --------------------------------------------------

    //! Vectors - Dynamic array(size of array is not fixed and is expandable)
    //!  if capacity of array is 3 then 4th element input mein dete hi a new array will be created with double the initial capacity and sab elements new array mein copy ho jayega. The old array will then be dumped.

    // vector<int> v;

    // cout<<"Capacity of empty vector -> "<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"Capacity of vector -> "<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"Capacity of vector -> "<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"Capacity of vector -> "<<v.capacity()<<endl;

    // cout<<endl;
    // cout<<"Size of vector v => "<<v.size()<<endl;

    // cout<<"Element at 2nd index : "<<v.at(2)<<endl;

    // cout<<endl;
    // cout<<"Front : "<<v.front()<<endl;
    // cout<<"Back : "<<v.back()<<endl;

    // cout<<endl;

    // cout<<"Before pop"<<endl;
    // for(int i : v) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // v.pop_back();

    // cout<<"After pop"<<endl;
    // for(int i : v) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"Before clear size : "<<v.size()<<endl;
    // v.clear();
    // cout<<"After clear size : "<<v.size()<<endl;

    // vector<int> a(5,1); // means array name is "a" with size 5 and all elements are set as 1

    // cout<<"Print a"<<endl;
    // for(int i : a) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<endl;

    // //! How to copy array "a" into another array named "last"?
    // vector<int> last(a);
    // cout<<"Print last"<<endl;
    // for(int i : a) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    //! ---------------------------------------------------------

    //! Deque - deque (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end.

    // deque<int> d;

    // d.push_back(1);
    // d.push_front(2);
    // // d.push_front(3);

    // cout<<endl;

    // for(int i : d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_back();
    // for(int i : d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();
    // for(int i : d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // cout<<"Print 1st index element : "<<d.at(1)<<endl;

    // cout<<"Front : "<<d.front()<<endl;
    // cout<<"Back : "<<d.back()<<endl;

    // cout<<"Empty or not : "<<d.empty()<<endl;

    // cout<<"Size before erase : "<<d.size()<<endl;
    // d.erase(d.begin(),d.begin()+1);
    // cout<<"Size after erase : "<<d.size()<<endl;

    // for(int i : d) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    //! -------------------------------------------------------

    //! List(Doubly linked list)

    list<int> l;

    // l.push_back(1);
    // l.push_front(2);

    // for (int i : l)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    
    // l.erase(l.begin());
    // cout << "after erase" << endl;
    // for (int i : l)
    // {
    //     cout << i << " ";
    // }

    // cout<<endl;
    // cout<<"size of list"<<l.size()<<endl;

    return 0;
}