#include<iostream>
#include<vector>

using namespace std;

bool isValid(vector<int> board,int mid,int m)
{
    int pt=1;
    int time=0;
    for(int i=0;i<board.size();i++)
    {
        if(board[i]+time<=mid)
        {
            time+=board[i];
        }
        else{
            pt++;
            time=board[i];
        }
    }
    if(pt==m)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    vector<int> board = {3,4,5,6};
    int M;
    cout<<"Enter The Number Of Painter You want : ";
    cin>>M;
    int i=0;
    int j=0;
    int ans=INT_MAX;
    for(int i=0;i<board.size();i++)
    {
        j+=board[i];
    }
    
    while(i<=j)
    {
        int mid = i + (j-i)/2;
        // cout<<"Hii"<<endl;
        if((isValid(board,mid,M)))
        {
            // cout<<"Hii1"<<endl;
            ans=min(ans,mid);
            j=mid-1;
        }
        else{
            // cout<<"Hii2"<<endl;
            i=mid+1;
        }
    }
    cout<<ans<<endl;
}