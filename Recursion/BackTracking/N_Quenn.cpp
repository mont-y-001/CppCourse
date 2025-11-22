#include <iostream>
#include <vector>
using namespace std;

void PrintSolution(vector<vector<int>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
                cout << "Q ";
            else
                cout << "- ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    int i = row, j = col;

    // check left row
    while (j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        j--;
    }

    // check upper left diagonal
    i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i--;
        j--;
    }

    // check lower left diagonal
    i = row, j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i++;
        j--;
    }

    // safe position
    return true;
}

void Solve(vector<vector<int>> board, int col, int n)
{
    // base case
    if (col >= n)
    {
        PrintSolution(board, n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // place queen
            board[row][col] = 1;

            // recursive call for next column
            Solve(board, col + 1, n);

            // backtrack
            board[row][col] = 0;
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    Solve(board, 0, n);
}
