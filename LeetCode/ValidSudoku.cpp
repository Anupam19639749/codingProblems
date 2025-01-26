#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
bool isValidSudoku(vector<vector<char>> &board)
{
    // Create sets to track numbers in rows, columns, and sub-grids
    vector<unordered_set<char>> rows(9);
    vector<unordered_set<char>> cols(9);
    vector<unordered_set<char>> subgrids(9);

    for (int r = 0; r < 9; ++r)
    {
        for (int c = 0; c < 9; ++c)
        {
            char num = board[r][c];

            // Ignore empty cells
            if (num == '.')
                continue;

            // Calculate sub-grid index
            int subgridIndex = (r / 3) * 3 + (c / 3);

            // Check if the number is already present in the row, column, or sub-grid
            if (rows[r].count(num) || cols[c].count(num) || subgrids[subgridIndex].count(num))
            {
                return false;
            }

            // Insert the number into the respective row, column, and sub-grid
            rows[r].insert(num);
            cols[c].insert(num);
            subgrids[subgridIndex].insert(num);
        }
    }

    // If all checks pass, the board is valid
    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    if (isValidSudoku(board))
    {
        cout << "The Sudoku board is valid." << endl;
    }
    else
    {
        cout << "The Sudoku board is invalid." << endl;
    }

    return 0;
}