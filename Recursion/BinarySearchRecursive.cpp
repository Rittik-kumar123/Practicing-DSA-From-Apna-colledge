#include<iostream>
#include<vector>

using namespace std;

bool search(vector<int> &arr,int target,int &idx,int st,int end)
{
    int mid=(st+end)/2;
    if(st<=end)
    {
        if(arr[mid]==target)
        {
            idx=mid;
            return true;
        }
        else if(arr[mid]>target)
        {
            return search(arr,target,idx,st,mid-1);
        }
        else{
            return search(arr,target,idx,mid+1,end);
        }
    }
    else{
        return false;
    }
    
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int target;
    cout<<"Enter The Target Thet You Want To Find : ";
    cin>>target;
    int idx=-1;
    int n = arr.size();
    if(search(arr,target,idx,0,n-1))
    {
        cout<<"Founded at idx "<<idx<<endl;
    }
    else{
        cout<<"Not Founded"<<endl;
    }
    return 0;
}