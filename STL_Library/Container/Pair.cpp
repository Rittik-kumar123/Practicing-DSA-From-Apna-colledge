#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{
    pair<int,pair<char,int>> p = {1,{'a',2}};
    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;

    vector<pair<int,pair<char,int>>> vec={{1,{'a',1}},{2,{'b',2}}};
    for(auto v : vec)
    {
        cout<<v.first<<"->"<<v.second.first<<" "<<v.second.second<<endl;
    }
    cout<<endl;

    vec.push_back({3,{'c',3}});
    vec.emplace_back(4,make_pair('d',4));
    for(auto v : vec)
    {
        cout<<v.first<<"->"<<v.second.first<<" "<<v.second.second<<endl;
    }

    vector<pair<int,int>> vec1;
     vec1.push_back({1,2});//assumes data are being given in pair format it just insert the value
     vec1.emplace_back(2,3);//in_place create object it make sure that first convert input into pair then insert
     cout<<"difference between push_back and emplace back "<<endl;
     for(auto v : vec1)
    {
        cout<<v.first<<"->"<<v.second<<endl;
    }

    return 0;
}