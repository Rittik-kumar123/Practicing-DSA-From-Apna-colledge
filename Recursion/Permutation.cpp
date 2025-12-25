#include<iostream>
#include<vector>

using namespace std;

void getPermute(vector<int> &arr,int idx,vector<vector<int>>& ans)
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
    vector<int> arr = {1,2,3};
    int idx=0;
    vector<vector<int>> ans;
    getPermute(arr,idx,ans);
    for(auto i : ans)
    {
        for(int j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}