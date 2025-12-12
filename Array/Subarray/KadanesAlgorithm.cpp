#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int max_sum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++)
    {
        currSum+=array[i];
        if(currSum<0)
        {
            currSum=0;
        }
        max_sum=max(currSum,max_sum);
    }
    cout<<"Maximum Sum Of the Subarray is: "<<max_sum<<endl;
}