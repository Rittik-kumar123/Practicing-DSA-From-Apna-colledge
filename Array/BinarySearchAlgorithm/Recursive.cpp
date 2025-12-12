#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<int> num,int target,int i,int j)
{

    while(i<=j)
    {
        int mid=(i+j)/2;
        
        if(num[mid]==target)
        {
            return mid;
        }
        else if(num[mid]<target)
        {
            
           return BinarySearch(num,target,mid+1,j);
        }
        else{
            return BinarySearch(num,target,i,mid-1);
        }
    }

    return 0;

}

int main()
{
    vector<int> num = {1,2,3,4,5,6,7};
    int target;
    cout<<"Enter The Target Element You Want to Find : ";
    cin>>target;
    int result = BinarySearch(num,target,0,num.size()-1);
    if(result==0)
    {
        cout<<"Not Present"<<endl;
    }
    else{
        cout<<"Present in position : "<<result<<"th"<<endl;
    }
    return 0;
}