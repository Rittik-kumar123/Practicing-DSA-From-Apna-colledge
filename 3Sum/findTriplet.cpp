#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

//T.C=>O(n^3*log(unique triplet))

// set<vector<int>> bruteForce(vector<int>& arr)
// {
//     int n=arr.size();
//     set<vector<int>> ans;
//     for(int i=0;i<n-2;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             int pairSum=0;
//             pairSum=arr[i]+arr[j];
//             if(j-i==1)
//             {
//                 continue;
//             }
//             else{
//                 for(int k=i+1;k<j;k++)
//                 {
//                     if(pairSum+arr[k]==0)
//                     {
//                         vector<int> trip = {arr[i],arr[j],arr[k]};
//                         sort(trip.begin(),trip.end());
//                         if(ans.find(trip)==ans.end())
//                         {
//                             ans.insert(trip);
//                         }
                        
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

//T.C=>O(n2*log(uniqueSolution));
vector<vector<int>> better(vector<int>& arr)
{
    int n = arr.size();
    vector<vector<int>> ans;
    set<vector<int>> tripset;

    for(int i = 0; i < n - 2; i++)
    {
        int target = -arr[i];
        set<int> s;

        for(int j = i + 1; j < n; j++)
        {
            int b = arr[j];
            int c = target - b;

            if(s.find(c) != s.end())
            {
                vector<int> trip = {arr[i], b, c};
                sort(trip.begin(), trip.end());

                if(tripset.find(trip) == tripset.end())
                {
                    tripset.insert(trip);
                    ans.push_back(trip);
                }
            }
            s.insert(b);
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {-1, 0 , 1 , 2, -1, -4};
    vector<vector<int>> ans;
    int target=0;

    // sort(arr.begin(),arr.end());

    ans = better(arr);
    for(auto i : ans)
    {
        for(int j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}