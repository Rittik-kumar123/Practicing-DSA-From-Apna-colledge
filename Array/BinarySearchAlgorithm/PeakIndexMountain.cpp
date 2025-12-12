#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> num = {3,5,6,7,8,9,5,4,3};
    int n = num.size();
    int peak_index = 0;
    int i=1;
    int j=n-2;
    while(i<=j)
    {
        int mid = i + (j-i)/2;
        // cout<<"Hii";
        if(num[mid-1]<num[mid] && num[mid+1]<num[mid])
        {
            peak_index=mid;
            break;
        }
        else if(num[mid]>num[mid-1])
        {
            i=mid+1;
        }
        else
        {
            j=mid-1;
        }
    }
    cout<<"The Peak Index is : "<<peak_index<<"th element that is : "<<num[peak_index]<<endl;
}
