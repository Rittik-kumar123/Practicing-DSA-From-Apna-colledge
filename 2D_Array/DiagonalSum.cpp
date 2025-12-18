#include<iostream>
#include<vector>

using namespace std;

//T.C = O(n*n)
//It's Not Optimize Solution below this I have written optimize code;
// int diagonalSum(vector<vector<int>> &arr,int row,int col)
// {
//     int primaryDiagonal=0;
//     int secondaryDiagonal=0;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             if(i==j)
//             {
//                 primaryDiagonal+=arr[i][j];
//                 secondaryDiagonal+=arr[i][row-1-i];
//             }
//         }
//     }
//     return (primaryDiagonal+secondaryDiagonal);
// }

// Optimized Solution
//T.C => O(n)
int diagonalSum(vector<vector<int>> &arr,int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum+=(arr[i][i]+arr[i][row-i-1]);
    }
    return sum;
}

int main()
{
    int row,col;
    cout<<"Enter The Value of row and col .. ";
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<"Enter The Value of 2D array .. "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Values of Your 2D array are as follows .. "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans=diagonalSum(arr,row,col);
    cout<<"Sum Of Diagonal element of array both Primary and secondary is .. "<<ans<<endl;
    return 0;
}