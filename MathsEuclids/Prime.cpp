//This will give us TLE To Over come this we will use Sieve Of Erathosthenas
#include<iostream>
#include<vector>

using namespace std;

bool is_prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the last number to get prime number"<<endl;
    cin>>n;
    vector<int> ans;
    for(int i=2;i<=n;i++)
    {
        if(is_prime(i))
        {
            ans.push_back(i);
        }
    }
    cout<<"Total Prime Number come in Your Range are : ";
    for(int j : ans)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    return 0;
}