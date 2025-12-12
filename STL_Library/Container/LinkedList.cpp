#include<iostream>
#include<list>

using namespace std;

int main()
{
    //same as vector
    //act as doubly linked list

    //1.Initialize
    list<int> l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_front(3);
    l1.push_front(4);

    cout<<"Print List ... "<<endl;//4 3 1 2
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l1.pop_back();
    l1.pop_front();
    cout<<"Print List ... after removing 1st and last element  "<<endl;//3 1
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   

    l1.insert(l1.begin(),5);
    cout<<"Print List ... after inserting element at  1st pos  "<<endl;//3 1
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    auto it = l1.begin();
    advance(it, 1);  // move to index 1 (second element)
    l1.erase(it);
    cout<<"Print List ... after erasing element at  2nd pos  "<<endl;//3 1
    for(int i : l1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}