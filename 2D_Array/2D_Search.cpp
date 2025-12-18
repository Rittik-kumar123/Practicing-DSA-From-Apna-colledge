#include<iostream>
#include<vector>

using namespace std;

bool searchInCol(vector<vector<int>>& arr, int target, int midRow)
{
    int startCol = 0;
    int endCol = arr[0].size()-1;
    while(startCol<=endCol)
    {
        int midCol = startCol + (endCol-startCol)/2;
        if(arr[midRow][midCol]==target)
        {
            // cout<<matrix[midRow][midCol]<<endl;
            return true;
        }
        if(arr[midRow][midCol]>target)
        {
            endCol=midCol-1;
        }
        if(arr[midRow][midCol]<target)
        {
            startCol=midCol+1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>& arr, int target) {
    int startRow = 0;
    int endRow=arr.size()-1;
    int n=arr[0].size();
    while(startRow<=endRow)
    {
        int midRow=startRow+(endRow-startRow)/2;
        if(arr[midRow][0]<=target && arr[midRow][n-1]>=target)
        {
            //Found The Target Row
            return searchInCol(arr,target,midRow);
        }
        else if(arr[midRow][0]>target)
        {
            endRow=midRow-1;
        }
        else if(arr[midRow][n-1]<target)
        {
            startRow=midRow+1;
        }
    }
    return false;
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

    cout<<"Enter The Target Element That You want to find ... ";
    int target=0;
    cin>>target;

    bool ans=searchMatrix(arr,target);
    if(ans==true)
    {
        cout<<"Founded.."<<endl;
    }
    else{
        cout<<"Not Founded ... "<<endl;
    }
    return 0;
}