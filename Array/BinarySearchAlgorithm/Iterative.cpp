#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {1,2,4,5,6,7,8};
    int i=0;
    int j=nums.size()-1;
    int target;
    cout<<"Enter the target element you want : ";
    cin>>target;
    int found=0;
    while(i<=j)
    {
        int mid = i + (j-i)/2;
        if(nums[mid]==target)
        {
            found=1;
            cout<<"Your Target element is in the array in : "<<mid<<"th Position"<<endl;
            j--;
        }
        else if(nums[mid]<target)
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }

    if(found==0)
    {
        cout<<"Your Target Element is not in the array."<<endl;
    }

    return 0;
}