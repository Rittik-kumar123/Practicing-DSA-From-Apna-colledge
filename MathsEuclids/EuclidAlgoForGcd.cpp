#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }

    if(a>b)
    {
       return gcd(a%b,b);
    }
    else{
       return gcd(a,b%a);
    }
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b whose gcd you want .. ";
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"GCD value of given number is .. ";
    cout<<ans<<endl;
    return 0;
}