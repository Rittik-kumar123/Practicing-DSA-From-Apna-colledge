#include<iostream>
#include<vector>
#include<string>

using namespace std;

void getPermute(string &arr,int idx,vector<string>& ans)
{
    if(idx==arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for(int i=idx;i<arr.size();i++)
    {
        swap(arr[i],arr[idx]);//This is preventing us from getting extra time complexity
        getPermute(arr,idx+1,ans);
        swap(arr[i],arr[idx]);//This Step is from backtrack
    }
}

int main()
{
    string arr = "abc";
    int idx=0;
    vector<string> ans;
    getPermute(arr,idx,ans);
    for(string i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}