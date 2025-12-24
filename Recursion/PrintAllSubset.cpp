#include<iostream>
#include<vector>

using namespace std;
void getSubarr(vector<int> arr,vector<vector<int>> &ans,vector<int> &subarr,int idx)
{
    if(idx==arr.size())
    {
        ans.push_back(subarr);
        return;
    }

    //include
    subarr.push_back(arr[idx]);
    getSubarr(arr,ans,subarr,idx+1);

    //exclude
    subarr.pop_back();
    getSubarr(arr,ans,subarr,idx+1);

    return;
}

int main()
{
    vector<int> arr = {1,2,3};

    vector<vector<int>> ans;
    vector<int> subarr;
    int idx=0;
    getSubarr(arr,ans,subarr,idx);
    for(auto i:ans)
    {
        for(int j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}