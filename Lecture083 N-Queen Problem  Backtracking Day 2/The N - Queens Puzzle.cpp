#include <bits/stdc++.h> 

void addSolution(vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    vector<int> temp;    
    
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            temp.push_back(board[i][j]);
        }
    }
    
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    // this func is to check ki bass attack naa kare
    // same row mein naa ho
    // same col mein naa ho
    // diagonal mein naa ho
    
    // check bass right to left dir mein karo because left to right mein toh hum fill kar rahe hai
    // means row same reh raha hai and col decrement ho raha hai
    int x = row;
    int y = col;
    
    // check for same row
    while(y>=0)
    {
        if(board[x][y]==1)
            return false;
        y--;
    }
    // no need to check col because ek instance pe ek col mein kabhi 2 queens ho hi nahi sakte essa code likha hai humne
    // see Lec83 at 18:50 min to understand why col not needed and how diagonal code is thought
    x = row;
    y = col;
    // check for upper diagonal
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    
    x = row;
    y = col;
    // check for lower diagonal
    while(x<n && y>=0)
    {
        if(board[x][y]==1)
            return false;
        x++;
        y--;
    }
    
    // agar yahan tak kahi kuch issue nahi dikhi and false return nahi hua means sab safe hai
    return true;
    
}

void solve(int col, vector<vector<int>> &ans, vector<vector<int>> &board, int n)
{
    // base case - jab saare cols bhar jayenge
    if(col == n)
    {
        addSolution(ans, board, n);
        return;
    }
    
    // solve 1 case and rest recusrion will take care and solve
    for(int row=0; row<n; row++)
    {
        // if placing queen is safe then vahan rakhdo queen ko aur next col ke liye call lagado
        if(isSafe(row,col,board,n))
        {
            board[row][col] = 1;
            solve(col+1, ans, board, n);
            //jab iss func se return karoge toh backtrack karna padega
            board[row][col] = 0;
        }
    }
    
}

vector<vector<int>> nQueens(int n)
{
	// make a 2-D array for board of nxn dimention and initialise it by 0
    vector<vector<int>> board(n, vector<int>(n,0));
    vector<vector<int>> ans;
    
    solve(0, ans, board, n);
    return ans;
}