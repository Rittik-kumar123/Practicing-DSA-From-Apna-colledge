#include<iostream>

using namespace std;

int main(){

    int x;
    cout<<"Enter the number whose power you want : ";
    cin>>x;
    int pow;
    cout<<"Enter the power : ";
    cin>>pow;
    int ans=1;
    while(pow>0)
    {
        if(pow%2==1)
        {
            ans*=x;
        }
        x*=x;
        pow/=2;
    }
    cout<<"The Value of power is : "<<ans<<endl;
    return 0;
}