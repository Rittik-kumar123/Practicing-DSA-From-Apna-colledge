#include<iostream>
#include<queue>

using namespace std;

int main()
{
   priority_queue<int> pq;

   pq.push(5);
   pq.push(10);
   pq.push(3);
   pq.push(4);

   while(!pq.empty())
   {
    cout<<pq.top()<<" ";
    pq.pop();
   }
   cout<<endl;

   //if we want in reverse order
   priority_queue<int,vector<int>,greater<int>> rev_pq;
   rev_pq.push(5);
   rev_pq.push(10);
   rev_pq.push(3);
   rev_pq.push(4);

   while(!rev_pq.empty())
   {
    cout<<rev_pq.top()<<" ";
    rev_pq.pop();
   }

    return 0;
}