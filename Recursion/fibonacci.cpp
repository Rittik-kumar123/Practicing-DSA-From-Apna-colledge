#include<iostream>
#include<vector>

using namespace std;
//Here My Intend is to calculate Fibonacci with values that are coming when calculation is done.

int fibo(int n,vector<int> &ans)
{
    if(n==0)
    {
        ans.push_back(n);
        return 0;
    }
    if(n==1)
    {
        ans.push_back(n);
        return 1;
    }

    int sum=fibo(n-1,ans)+fibo(n-2,ans);

    ans.push_back(sum);

    return sum;
}

int main()
{
    int n;
    cout<<"Enter The Number Whoose Factorial You Want .... ";
    cin>>n;
    vector<int> ans;
    int sum=fibo(n,ans);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<sum<<endl;
    return 0;
}