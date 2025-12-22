#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {9,4,20,3,10,33};
    int n=nums.size();
    int tar=0;
    cout<<"Enter The Target Sum : ";
    cin>>tar;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            if(sum+nums[j]==tar)
            {
                ans++;
                break;
            }
            else if(sum+nums[j]>tar)
            {
                break;
            }
            else
            {
                sum+=nums[j];
            }
        }
    }
    cout<<"The Result is : "<<ans<<endl;
    return 0;
}