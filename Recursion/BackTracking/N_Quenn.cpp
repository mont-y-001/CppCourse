#include <iostream>
#include <vector>
using namespace std;

void Solve(vector<vector<int>> board, int col, int n)
{
    // base case
    if (col >= n)
    {
        PrintSolution(board, n);
        return;
    }
    // 1 case solve krenge
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n) {
                // Queen rakh do
                board[row][col] == 1;
            })
    }
}
int main()
{
    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int col = 0;
    Solve(board, col, n);
}