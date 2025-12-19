#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

// pair<int,int> bruteforce(vector<int>& arr,int target)
// {
//     pair<int,int> ans;
//     for(int i=0;i<arr.size()-1;i++)
//     {
//         int first=arr[i];
//         for(int j=i+1;j<arr.size()-1;j++)
//         {
//             if(first+arr[j]==target)
//             {
//                 ans.first=first;
//                 ans.second=arr[j];
//             }
//         }
//     }
//     return ans;
// }

// pair<int,int> better(vector<int>& arr,int target)
// {
//     pair<int,int> ans;
//     int f=0;
//     int l=arr.size()-1;
//     while(f<l)
//     {
//         if((arr[f]+arr[l])==target)
//         {
//             ans.first=arr[f];
//             ans.second=arr[l];
//             break;
//         }
//         else if((arr[f]+arr[l])>target)
//         {
//             l--;
//         }
//         else f++;
//     }
//     return ans;
// }

pair<int,int> optimize(vector<int>& arr,int target)
{
    pair<int,int> ans;
    unordered_map<int,int> m;
    for(int i = 0;i<arr.size();i++)
    {
        int first=arr[i];
        int second=target-first;
        if(m.find(second)!=m.end())
        {
            ans.first=i;
            ans.second=m[second];
            break;
        }
        m[first]=i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {5,2,7,9,11};
    int target=0;
    cout<<"Enter The Sum You Want .. ";
    cin>>target;

    // sort(arr.begin(),arr.end());

    pair<int,int> ans = optimize(arr,target);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}