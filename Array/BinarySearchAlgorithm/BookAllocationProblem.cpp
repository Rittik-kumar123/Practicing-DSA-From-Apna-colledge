/*There are N books, each ith book has A[I] number of pages.

You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.

Each book should be allocated to a student.

Each student has to be allocated at least one book.

Allotment should be in contiguous order.

Calculate and return that minimum possible number.

Return-1 if a valid assignment is not possible.*/

#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int> num,int mid,int m)
{
    int st=1;
    int page_count=0;
    for(int i=0;i<num.size()-1;i++)
    {
        if(page_count+num[i]<=mid)
        {
            page_count+=num[i];
        }
        else{
            page_count=num[i];
            st++;
        }
    }
    if(st==m)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    vector<int> num = {2,1,3,4};
    int m;
    cout<<"Enter The Number Of student But Make Sure it is less then the size of number of book : ";
    cin>>m;
    int i=0;
    int j=0;
    int ans=INT_MAX;
    for(int i=0;i<num.size();i++)
    {
        j+=num[i];
    }
    // cout<<j<<endl;
    while (i<=j)
    {
        int mid = i + (j-i)/2;
        if(!(isValid(num,mid,m)))
        {
            ans=min(ans,mid);
            cout<<ans<<endl;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<"minimum possible number is : "<<ans<<endl;
    
}