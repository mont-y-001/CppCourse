#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solveMaze(int maze[3][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (i = row - 1 &&j = col - 1)
    {
        path.push_back(output);
        return;
    }
    // DOWN
    if (isSafe(i + 1, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
    }
    solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
    // Backtracking
    visited[i + 1][j] = false;

    // LEFT
    if (isSafe(i + 1, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
    }
    solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
    // Backtracking
    visited[i + 1][j] = false;

    // RIGHT
    if (isSafe(i + 1, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
    }
    solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
    // Backtracking
    visited[i + 1][j] = false;

    // UP
    if (isSafe(i + 1, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
    }
    solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
    // Backtracking
    visited[i + 1][j] = false;
}
int main()
{
    int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};
    int row = 3;
    int col = 3;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;
    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output);
}