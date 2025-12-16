#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter The String : "<<endl;
    getline(cin, str);
    cout<<"After reversing the string : "<<endl;
    reverse(str.begin(),str.end());
  
    int i=0;

    string ans="";
    while(i<str.length())
    {
        string temp="";
        while(i<str.length() && iswalnum(str[i]))
        {
            temp+=str[i];
            i++;
        }
        reverse(temp.begin(),temp.end());
        if(temp.length()>0)
        {
            if(!ans.empty()) ans+=" ";
            ans+=temp;
        }
        else
        {
            ans+=temp;
        }
        i++;
    }
    cout<<ans;
    return 0;
}