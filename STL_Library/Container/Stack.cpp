#include<iostream>
#include<stack>

using namespace std;

int main()
{
   stack<int> s;

   s.push(1);
   s.push(2);
   s.push(3);

//    while(!s.empty())
//    {
//     cout<<s.top()<<" ";
//     s.pop();
//    }

    stack<int> s1;
    s1.swap(s);
    cout<<"s size -> "<<s.size()<<endl;
    cout<<"s1 size -> "<<s1.size()<<endl;

    return 0;
}