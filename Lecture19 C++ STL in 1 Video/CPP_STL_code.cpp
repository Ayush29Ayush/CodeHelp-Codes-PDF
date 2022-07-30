#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

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

    // list<int> l;

    // list<int> n(5,100);

    // for (int i : n)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

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

    //! ------------------------------------------------------------

    //! Stack

    // stack<string> s;

    // s.push("Ayush");
    // s.push("Senapati");
    // s.push("Demon");

    // cout<<"Top Element -> "<<s.top()<<endl;
    // s.pop();
    // cout<<"Top Element -> "<<s.top()<<endl;

    // cout<<endl;
    // cout<<"Size : "<<s.size()<<endl;

    // cout<<endl;
    // cout<<"Empty or not -> "<<s.empty()<<endl;

    //! ------------------------------------------------------------

    //! Queue

    // queue<string> q;

    // q.push("Ayush");
    // q.push("Senapati");
    // q.push("Demon");

    // cout<<"Size before pop : " <<q.size()<<endl;

    // cout<<"First Element : "<<q.front()<<endl;
    // q.pop();
    // cout<<"First Element : "<<q.front()<<endl;

    // cout<<"Size after pop : " <<q.size()<<endl;

    //! ------------------------------------------------------------

    //! Priority Queue - a queue whose 1st element will always be greatest
    //! A priority queue is a special type of queue in which each element is associated with a priority and is served according to its priority. There are two types of Priority Queues -> Ascending and Descending.

    //! Max heap
    // priority_queue<int> maxi;

    // //! Min heap
    // priority_queue<int, vector<int>, greater<int>> mini;

    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);
    // cout << "size-> " << maxi.size() << endl;
    // int n = maxi.size();

    // for (int i = 0; i < n; i++)
    // {
    //     //! Sabse pehle maximum element ayega
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }
    // cout << endl;

    // mini.push(5);
    // mini.push(1);
    // mini.push(0);
    // mini.push(4);
    // mini.push(3);

    // int m = mini.size();
    // for (int i = 0; i < m; i++)
    // {
    //     cout << mini.top() << " ";
    //     mini.pop();
    // }
    // cout << endl;

    // cout << "khaali h kya bhai  ?? -> " << mini.empty() << endl;

    //! --------------------------------------------------------------

    //! Set
    //! Set is a C++ STL container used to store the unique elements, and all the elements are stored in a sorted manner. Once the value is stored in the set, it cannot be modified within the set; instead, we can remove this value and can add the modified value of the element. Sets are implemented using Binary search trees.

    // set<int> s;

    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(1);
    // s.insert(6);
    // s.insert(6);
    // s.insert(0);
    // s.insert(0);
    // s.insert(0);

    // for (auto i : s)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;

    // set<int>::iterator it = s.begin();
    // it++;

    // s.erase(it);

    // for (auto i : s)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;

    // cout << "-5 is present or not -> " << s.count(-5) << endl;
    // cout << "5 is present or not -> " << s.count(5) << endl;

    // cout<<endl;

    // set<int>::iterator itr = s.find(5);

    // cout<<"Value present at itr -> "<<*itr<<endl;

    // for (auto it = itr; it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    //! ------------------------------------------------------------

    //! Map
    //! Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.
    //! In a map, the key values are generally used to sort and uniquely identify the elements, while the mapped values store the content associated to this key. The types of key and mapped value may differ, and are grouped together in member type value_type, which is a pair type combining both:
    //! typedef pair<const Key, T> value_type;

    // map<int, string> m;

    // m[1] = "Ayush";
    // m[13] = "Senapati";
    // m[2] = "Demon";

    // m.insert({5, "bheem"});

    // cout << "before erase" << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << "finding -13 -> " << m.count(-13) << endl;

    // // m.erase(13);
    // cout << "after erase" << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << endl
    //      << endl;

    // auto it = m.find(5);

    // for (auto i = it; i != m.end(); i++)
    // {
    //     cout << (*i).first << endl;
    // }

    //! ------------------------------------------------------------

    //! Algorithms

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Uppper bound-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "max -> " << max(a, b);

    cout << "min -> " << min(a, b);

    swap(a, b);
    cout << endl
         << "a-> " << a << endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "string-> " << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    sort(v.begin(), v.end());
    cout << "after sorting" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}