#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> nums={2,2,2,2,1,1,1,1,4,4,1};
    int freq=0;
    int ans=0;
    for(int val:nums)
    {
       if(freq==0)
       {
        ans=val;
       }
        if(ans==val)
        {
            freq++;
        }
        else{
            freq--;
        }
    }
    // if there is possible that no answer exit then count the ans>n/2 return ans elsereturn -1
    freq=0;
    for(int i=0;i<nums.size();i++)
    {
        if(ans==nums[i])
        {
            freq++;
        }
    }
    if(freq>nums.size()/2)
    {
        cout<<"Majority element is: "<<ans<<endl;
    }
    else{
        cout<<"There is no majority element in this array. "<<endl;
    }
    
}