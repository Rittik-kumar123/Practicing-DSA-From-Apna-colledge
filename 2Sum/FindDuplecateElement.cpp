#include<iostream>
#include<vector>
#include<set>

using namespace std;

//T.C=O(n) and S.C=O(n)(in worst case)

// int findDuplicate(vector<int>& nums) {
//     set<int> n;
//     for(int i : nums)
//     {
//         if(n.find(i)!=n.end())
//         {
//             return i;
//         }
//         n.insert(i);
//     }
//     return -1;
// }

//T.C=O(n) S.C=O(1);

int Optimize(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        slow = nums[0];

        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }

int main()
{
    vector<int> nums = {1,2,3,2};
    cout<<"Duplicate Element in Your array is : "<<Optimize(nums);
    return 0;
}