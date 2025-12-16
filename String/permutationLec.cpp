#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the String whose permutation you want : ";
    cin>>str;
    int i=0;
    int n=str.length();
    cout<<"Total permutation Possible are : ";

    while(next_permutation(str.begin(),str.end()))
    {
        cout<<str<<" ";
    }
    cout<<endl;
    return 0;
}

    //Function signature (simplified)
// bool next_permutation(BidirectionalIterator first,
//                       BidirectionalIterator last);


// 👉 Notice:

// It does NOT take the string by value

// It takes iterators pointing to the original container

// What actually happens internally?

// When you call:

// next_permutation(str.begin(), str.end());


// str.begin() → points to the first character of str

// str.end() → points past the last character

// The function:

// Rearranges characters inside the same memory

// Forms the next lexicographical permutation

// Returns:

// true → next permutation exists

// false → last permutation reached (and resets to smallest)

// So the string itself is modified, not a copy.