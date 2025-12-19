#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans(0);
        int sr=0,sc=0,er=arr.size()-1,ec=arr[0].size()-1;
        while((sc<=ec) && (sr<=er))
        {
            //top most
            for(int i=sc;i<=ec;i++)
            {
                ans.push_back(arr[sr][i]);
            }
            //right most
            for(int i=sr+1;i<=er;i++)
            {
                ans.push_back(arr[i][ec]);
            }
            //bottom most
            for(int i=ec-1;i>=sc;i--)
            {
                if(sr==er)//This is edge case when r<c 
                {
                    break;
                }
                ans.push_back(arr[er][i]);
            }
            //left most
            for(int i=er-1;i>=sr+1;i--)
            {
                if(sc==ec)//This is edge case when r>c 
                {
                    break;
                }
                ans.push_back(arr[i][sc]);
            }
            sc++; sr++; er--; ec--;
        }
        return ans;
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

    vector<int> ans=spiralOrder(arr);
    cout<<"Your Spiral Pattern is as follows .. "<<endl;
    for(int i : ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}