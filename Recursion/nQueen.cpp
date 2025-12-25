#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isSafe(vector<string> &board,int row,int col,int n)
{
    //horrizontally
    for(int c=0;c<n;c++)
    {
        if(board[row][c]=='Q')
        {
            return false;
        }
    }
    //vertically
    for(int r=0;r<n;r++)
    {
        if(board[r][col]=='Q')
        {
            return false;
        }
    }
    //left Diagonal
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    //right Diagonal
    for(int i=row,j=col;i>=0&&j<n;i--,j++)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    return true;
}

void nQueens(vector<string> &board,vector<vector<string>> &ans,int row,int n){

    //base Case
    if(row==n)
    {
        ans.push_back(board);
        return;
    }


    for(int c=0;c<n;c++)
    {
        if(isSafe(board,row,c,n))
        {
            board[row][c]='Q';
            nQueens(board,ans,row+1,n);
            board[row][c]='.';
        }
    }
}

int main()
{
    int n;
    cout<<"Enter The Number Of Queens You Want : ";
    cin>>n;

    vector<string> board(n,string(n,'.'));
    vector<vector<string>> ans;
    nQueens(board,ans,0,n);

    int count=1;

    for(auto i : ans)
    {
        cout<<"Board No : "<<count++<<endl;
        for(string j : i)
        {
            for(char k : j)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}