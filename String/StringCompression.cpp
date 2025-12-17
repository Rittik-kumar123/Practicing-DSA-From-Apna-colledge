// In this Solution One thing is clear my time complexity is O(n) and space Complexity is also O(n);
//for optimize solution got leet code
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};

    vector<char> ans;
    char c = chars[0];
    int count_char=1;
    for(int i=1;i<chars.size();i++)
    {
            
        if(c == chars[i])
        {
            count_char++;
        }
        else
        {
            if(count_char==1)
            {
                ans.push_back(c);
                c=chars[i];
                // cout<<count_char<<endl;
                count_char=1;
            }
            else
            {
                ans.push_back(c);
                // cout<<count_char<<endl;
                string cnt = to_string(count_char);
                for(char ch : cnt)
                {
                    ans.push_back(ch);
                }
                c=chars[i];
                count_char=1;
            }
        }
    }
    ans.push_back(c);
    if (count_char > 1) {
        string cnt = to_string(count_char);
        for (char ch : cnt) {
            ans.push_back(ch);
        }
    }
    chars=ans;
    cout<<"String After Compression ... " ;
    for(char ch1 : chars)
    {
        cout<<ch1<<" ";
    }
    cout<<endl;
    return 0;
}