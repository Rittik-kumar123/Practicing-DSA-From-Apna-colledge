#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {1,-1,0,4,-4};
    // int Product = 1;
    // int n = nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     Product*=nums[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     int n1=nums[i];
    //     nums[i]=Product/nums[i];
    // }
    vector<int> ans;
    vector<int> prefix(nums.size());
    int n=nums.size();
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    vector<int> suffix(n);
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++)
    {
        ans.push_back(prefix[i]*suffix[i]);
    }
    cout<<"The Product Of Array Except Self are : ";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}