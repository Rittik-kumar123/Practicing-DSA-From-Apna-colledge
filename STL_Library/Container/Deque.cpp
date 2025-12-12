#include<iostream>
#include<deque>

using namespace std;

int main()
{
    //similar as list
     deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    cout<<"Print deque ... "<<endl;//4 3 1 2
        for(int i :d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();
    cout<<"Print deque ... after removing 1st and last element  "<<endl;//3 1
        for(int i :d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   

     d.insert(d.begin(),5);
    cout<<"Print deque ... after inserting element at  1st pos  "<<endl;//3 1
        for(int i :d)
    {
        cout<<i<<" ";
    }
    // d.insert(2,5);
    // cout<<"Print deque ... after inserting element at  2nd index  "<<endl;//3 1
    // for(int i :d)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    //Random Acces
    cout<<"Accesing by index value ... "<<d[1]<<endl;
    auto it =d.begin();
    advance(it, 1);  // move to index 1 (second element)
    d.erase(it);
    cout<<"Print deque ... after erasing element at  2nd pos  "<<endl;//3 1
        for(int i :d)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}