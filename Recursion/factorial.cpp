#include<iostream>

using namespace std;

int fact(int n)
{
    if(n==0) return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter The Number Whoose Factorial You Want .... ";
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}