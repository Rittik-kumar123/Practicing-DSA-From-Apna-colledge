#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> nums={2,2,1,1,1};
    for(int val:nums)
    {
        int freq=0;
        for(int el:nums)
        {
            if(el==val)
            {
                freq++;
            }
        }
        if(freq>nums.size()/2)
        {
            cout<<"Majority Element Of the array is: "<<val<<endl;
            break;
        }
    }
}