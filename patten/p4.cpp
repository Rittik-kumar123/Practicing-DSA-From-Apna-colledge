#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size : ";
    cin>>n;//Enter the row of the pattern
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0)
            {
                cout<<'*';
            }
            else if(j==2*i)
            {
                cout<<'*';
            }
            else{
                cout<<"r";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(n-1)-2*i-1;j++)
        {
            if(j==0)
            {
                cout<<'*';
            }
            else if(j==2*(n-1)-2*i-2)
            {
                cout<<'*';
            }
            else{
                cout<<"r";
            }
        }
        cout<<endl;
    }
    return 0;
}