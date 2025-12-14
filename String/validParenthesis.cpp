// #include<iostream>
// #include <cwctype>
// #include<string>

// using namespace std;

// bool isAlphaNumeric(char k)
// {
//     if((k>='a' && k<='z') || (k>='A' && k<='Z') || (k>='0' && k<='9'))
//     {
//         return true;
//     }
    
//     return false;
// }

// int main(){
//     string str;
//     cout<<"Enter The String : ";
//     cin>>str;
//     int i=0;
//     cout<<str[i]<<" ";
//     int j=str.length()-1;
//     cout<<str[j]<<endl;
//     int count=0;
//     while(i<j)
//     {
        
//         if(!isAlphaNumeric(str[i]))
//         {
//             i++;
//             continue;
//         } 
//         // cout<<"hii"<<endl;
//         if(!isAlphaNumeric(str[j])){
//             j--;
//             continue;
//         }
//         // cout<<"hii1"<<endl;
//         // if(str[i]>='A' && str[i]<='Z')
//         // {
//         //     str[i]=(str[i]-'A')+'a';
//         // }
//         // // cout<<str[i]<<" ";
//         // if(str[j]>='A' && str[j]<='Z')
//         // {
//         //     str[j]=(str[j]-'A')+'a';
//         // }

//         // str[i]=tolower(str[i]);
//         // str[j]=tolower(str[j]);
//         // cout<<str[j]<<endl;
//         if(tolower(str[i])!=tolower(str[j]))
//         {
//             count=1;
//             cout<<"Not Palindrome"<<endl;
//             break;
//         }

//         i++;
//         j--;
//     }
//     if(count==0)cout<<"Palindrome"<<endl;
//     return 0;
// }


#include<iostream>
#include <cwctype>
#include<string>

using namespace std;

int main(){
    string str;
    cout<<"Enter The String : ";
    cin>>str;
    int i=0;
    cout<<str[i]<<" ";
    int j=str.length()-1;
    cout<<str[j]<<endl;
    int count=0;
    while(i<j)
    {
        
        if(iswalnum(!str[i]))
        {
            i++;
            continue;
        }
        if(iswalnum(!str[j])){
            j--;
            continue;
        }
        if(tolower(str[i])!=tolower(str[j]))
        {
            count=1;
            cout<<"Not Palindrome"<<endl;
            break;
        }

        i++;
        j--;
    }
    if(count==0)cout<<"Palindrome"<<endl;
    return 0;
}