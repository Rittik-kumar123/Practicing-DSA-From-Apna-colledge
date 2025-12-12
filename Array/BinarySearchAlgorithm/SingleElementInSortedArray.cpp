#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> num={1,1,2,2,3,4,4,5,5,6,6};
    int n = num.size();
    int i=0;
    int j=n-1;
    int idx=-1;
    while (i<=j)
    {
        int mid = i + (j-i)/2;
        // cout<<mid<<endl;
        if(num[mid]!=num[mid-1] && num[mid+1]!=num[mid])
        {
            idx=mid;
            // cout<<idx<<endl;
            break;
        }
        else if(num[mid]==num[mid-1])
        {
            // cout<<"Hii"<<endl;
            if((j-(mid+1))%2==1)
            {
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        else{
            if((j-mid)%2==1)
            {
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
    }
    cout<<"Your Single element is in Index : "<<idx<<"that is : "<<num[idx]<<endl;
    
}