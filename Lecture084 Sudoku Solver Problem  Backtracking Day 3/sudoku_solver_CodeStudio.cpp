#include <bits/stdc++.h>
bool isSafe(int row, int col, vector<vector<int>> &board, int val)
{
    for (int i = 0; i < board.size(); i++)
    {
        // ROW CHECK
        if (board[row][i] == val)
            return false;

        // COLUMN CHECK
        if (board[i][col] == val)
            return false;

        // CHECKING 3*3 MATRIX
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val)
            return false;
    }
    return true;
}

bool solve(vector<vector<int>> &board)
{
    int n = board[0].size();

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            // CELL EMPTY
            if (board[row][col] == 0)
            {
                for (int val = 1; val <= 9; val++)
                {
                    if (isSafe(row, col, board, val))
                    {
                        board[row][col] = val;

                        // RECURSIVE CALL to find aage ka solution
                        // agar recursion ne aage ka solution dhund liya hai then return true else jo value pehle padi thi vahi daal do vapis
                        bool isValid = solve(board);
                        if (isValid)
                            return true;
                        else
                        {
                            // BACKTRACK
                            // if isValid false aa gaya then pehle jesse tha vesse hi space ko 0 banado
                            board[row][col] = 0;
                        }
                    }
                }
                // if 1 to 9 sab try kar liya and solution nahi nikla then return false
                return false;
            }
        }
    }
    // agar pura traverse kar liya and kahi bhi return false nahi hua then return true
    return true;
}

void solveSudoku(vector<vector<int>> &sudoku)
{
    solve(sudoku);
}