#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    string part,str;
    cout<<"Enter The String : ";
    cin>>str;
    cout<<"Enter The Substring : ";
    cin>>part;
    vector<int> freq(26,0);
    for(int i=0;i<part.length();i++)
    {
        freq[part[i]-'a']++;
    }
    int i=0;
    int isPresent=0;
    while(i<=(str.length()-part.length()))
    {
        int j=i, win=0;//index value of window
        vector<int> windowfreq(26,0);
        while(win<part.length())
        {
            windowfreq[str[j]-'a']++;
            j++;
            win++;
        }
        int count=0;
        if(freq==windowfreq)
        {
            isPresent=1;
            break;
        }
        i++;
    }
    if(isPresent==1) cout<<"Permutation of substring is present"<<endl;
    else cout<<"Permutation of substring is not present"<<endl;

    return 0;
}

    // for(int k=0;k<26;k++)
        // {
        //     if(windowfreq[k]==freq[k])
        //     {
        //         count++;
        //     }
        // }
        
        // if(count==26)
        // {
        //     isPresent=1;
        //     break;
        // }