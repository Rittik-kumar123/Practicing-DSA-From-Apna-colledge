#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    string part;
    cout<<"Enter the String: ";
    cin>>str;
    cout<<"Enter The Substring whose occurence you want to remove : ";
    cin>>part;
    while ((str.length()>0) && (str.find(part)<str.length()-1))
    {
        int pos = str.find(part);
        cout<<pos<<endl;
        str.erase(pos,part.length());
    }
    cout<<str<<endl;
    
    return 0;
}