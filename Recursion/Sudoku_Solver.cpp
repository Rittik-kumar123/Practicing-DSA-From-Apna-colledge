#include<iostream>
#include<vector>

using namespace std;

bool isSafe(vector<vector<char>>& board,int row,int col,char digit)
{
    //horzontally
    for(int c=0;c<=8;c++)
    {
        if(board[row][c]==digit)
        {
            return false;
        }
    }
    //vertically
    for(int r=0;r<=8;r++)
    {
        if(board[r][col]==digit)
        {
            return false;
        }
    }
    //grid
    int r=(row/3)*3;
    int c=(col/3)*3;
    for(int r1=r;r1<=(r+2);r1++)
    {
        for(int c1=c;c1<=(c+2);c1++)
        {
            if(board[r1][c1]==digit)
            {
                return false;
            }
        }
    }
    return true;
}

bool SS(vector<vector<char>>& board , int row)
{
    if(row==9)
    {
        return true;
    }

    for(int col=0;col<9;col++)
    {
        if(board[row][col]=='.')
        {
            for(char dig='1';dig<='9';dig++)
            {
                if(isSafe(board,row,col,dig))
                {
                    board[row][col]=dig;
                    // move forward
                    if(SS(board, row))
                        return true;

                    // backtrack
                    board[row][col] = '.';
                }
            }
            return false;//Real Backtracking Is Happening 
        }
    }

    return SS(board, row + 1);
}

int main()
{
    vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};
    
    SS(board,0);
    for(auto i : board)
    {
        for(char j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}