#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the last number to get prime number"<<endl;
    cin>>n;
    vector<bool> is_prime(n+1,true);
    vector<int> ans;
    for(int i=2;i<n;i++)
    {
        if(is_prime[i])
        {
            ans.push_back(i);
            for(int j=i*2;j<n;j=j+i)
            {
                is_prime[j]=false;
            }
        }
    }
    cout<<"Prime Numbers given Range are : ";
    for(int i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}