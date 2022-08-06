#include<iostream>
//Sequence containers
#include<array>
#include<vector>
#include<deque>
#include<list>
//container adapter
#include<stack>
#include<queue>
//Associative containers
#include<set>
#include<map>
//Algorithms
#include<algorithm>
using namespace std;


int main()
{
    // Array
    // array<int,5> arr = {1,2,3,4,5};
    // int size = arr.size();
    // cout<<"Size : "<<arr.size()<<endl;
    // cout<<"is Empty : "<<arr.empty()<<endl;
    // cout<<"Front element : "<<arr.front()<<endl;
    // cout<<"Last element : "<<arr.back()<<endl;
    // cout<<"element ata index 2 : "<<arr.at(2)<<endl;

    // Vector   (iterators : begin,end)
    // vector<int> v;
    // vector<int> v2(5,1);   // (5,1) -> size 5, all elements initilise with 1 
    // vector<int> copyV2(v2);   // it is copy of v2

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(4);
    // cout<<"Before POP : "<<endl;
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // v.pop_back();
    // cout<<"After POP : "<<endl;
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // cout<<"2nd element : : "<<v.at(2)<<endl;
    // cout<<"Front element : "<<v.front()<<endl;
    // cout<<"Last element : "<<v.back()<<endl;


    // DeQueue (add & remove elem. in both side)
    // deque<int> d;

    // d.push_back(2);
    // d.push_back(3);
    // d.push_back(4);
    // d.push_front(1);
    // d.push_front(3);
    // d.pop_front();
    // d.pop_back();
    // for(int i : d)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;

    // cout<<"Size : "<<d.size()<<endl;
    // cout<<"2nd element : : "<<d.at(2)<<endl;
    // cout<<"is Empty : "<<d.empty()<<endl;
    
    // d.erase(d.begin(),d.begin()+1);   //we have specify from and to
    // cout<<"Size : "<<d.size()<<endl;


    // List ( Doubly LL, add & remove elem. in both side)
    // list<int> l;
    // l.push_back(2);
    // l.push_back(1);
    // list<int> copy(5,100);
    // for(int i : copy)
    // {
    //     cout<<i <<" ";
    // }cout<<endl;
    // l.erase(l.begin());
    // for(int i : l)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"Size : "<<l.size()<<endl;

    //Stack
    // stack<string> s;
    // s.push("Shreyas");
    // s.push("Girish");
    // s.push("Kulkarni");
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<"Size : "<<s.size()<<endl;
    // cout<<"empty : "<<s.empty()<<endl;

    //Queue (front)
    // queue<string> q;
    // q.push("Shreyas");
    // q.push("Girish");
    // q.push("Kulkarni");
    // q.pop();

    // cout<<q.front()<<endl;
    // cout<<"Size : "<<q.size()<<endl;

    //Priority_Queue (works as MIN_HEAP and MAX_HEAP)
    // priority_queue<int> max;                                //Maxheap
    // priority_queue<int, vector<int>, greater<int>> min;     //Min Heap

    // max.push(1);
    // max.push(3);
    // max.push(2);
    // max.push(0);
    // int n =  max.size();
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<max.top()<<" ";
    //     max.pop();
    // }cout<<endl;

    // min.push(1);
    // min.push(3);
    // min.push(2);
    // min.push(0);
    // n =  min.size();
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<min.top()<<" ";
    //     min.pop();
    // }cout<<endl;

    // Set (All element should be unique, (bg working = BST), elements always sorted)
    // set<int> s;
    // s.insert(3);
    // s.insert(2);
    // s.insert(4);
    // s.insert(1);    
    // s.erase(s.begin()); // Delete 1
    // for(int i : s)
    // {
    //     cout<<i<<" ";
    // }cout<<endl;
    // cout<<"2 is present or not : "<<s.count(2)<<endl;

    // Map 
    // map<int, string> m;
    // m[1] = "shreyas";
    // m[2] = "girish";
    // m[12] = "kulkarni";
    // m.insert({6,"bheem"});
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<"is 6 present : "<<m.count(6)<<endl;

    // Algorithms
    vector<int> v;
    v.push_back(10);  
    v.push_back(12);   
    v.push_back(1); 
    v.push_back(2); 

    cout<<"Find 10 : "<<binary_search(v.begin(),v.end(),10)<<endl;
    cout<<"lower bound of 10 : "<<lower_bound(v.begin(),v.end(),10) - v.begin()<<endl;
    cout<<"lower bound of 10 : "<<upper_bound(v.begin(),v.end(),10) - v.begin()<<endl;

    int a = 10, b = 4;
    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;

    string s = "Shreyas";
    reverse(s.begin(),s.end());
    cout<<s<<endl;


    return 0;
}