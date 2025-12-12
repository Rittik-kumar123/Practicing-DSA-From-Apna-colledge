#include<iostream>
#include<vector>
#include<Algorithm>

using namespace std;

int main()
{
    
    vector<int> vec = {1,2,3,6,5,4};
    //sort on the besis of first value of pair
    reverse(vec.begin(),vec.end());

    for(int val:vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}