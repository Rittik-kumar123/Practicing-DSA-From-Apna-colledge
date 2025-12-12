#include<iostream>
#include<vector>
#include<Algorithm>

using namespace std;

bool comparator(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p2.second=p2.second)
    {
        if(p1.first<p2.first) return true;
        else return false;
    }
}

int main()
{
    
    vector<pair<int,int>> vec = {{1,2},{4,3},{5,7},{7,5},{6,5}};
    //sort on the besis of first value of pair
    sort(vec.begin(),vec.end());

    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    //to sort on the basis of second value we use comparator
    sort(vec.begin(),vec.end(),comparator);
    cout<<"Sorting using comparator ... "<<endl;
    for(auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}