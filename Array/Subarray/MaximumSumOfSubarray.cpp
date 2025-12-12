#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){

   int n;
   cout<<"Enter The Size Of an array: ";
   cin>>n;
   cout<<"Your Array Size is "<<n<<endl;
   vector<int> arr(n,0);
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   cout<<"Your Array is "<<endl;
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   int Max_Sum=INT_MIN;
   cout<<"All The Possible subarray in the given array are: "<<endl;
   for(int start=0;start<n;start++)
   {
      for(int end=start;end<n;end++)
      {
        int sum=0;
         for(int it=start;it<=end;it++)
         {
            sum+=arr[it];
         }
         Max_Sum=max(Max_Sum,sum);
      }
   }
   cout<<"Maximum Sum Of the SubArray is : "<<Max_Sum<<endl;
   return 0;
}