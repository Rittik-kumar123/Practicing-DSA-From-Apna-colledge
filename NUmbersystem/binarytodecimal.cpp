#include<iostream>
using namespace std;

int convertdecimaltobinary(int n)
{
    int dec=n;
    int pow=1;
    int ans=0;
    while(dec>0)
    {
        int rem = dec%2;
        ans+=rem*pow;
        pow*=10;
        dec=dec/2;
    }
    return ans;
}

int main(){

   int n;
   cout<<"Enter Number whose conversion u want: ";
   cin>>n;
   int ans=convertdecimaltobinary(n);
   cout<<"Converted Value is : "<<ans<<endl;

    return 0;
}