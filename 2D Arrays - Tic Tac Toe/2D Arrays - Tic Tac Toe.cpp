#include <array>
#include <iostream>
#include <vector>

using namespace std;

void printTheGrid(vector<vector<char>> ticTacToeGrid)
{
    for (int row = 0; row < 3; ++row)
    {
        for (int column = 0; column < 3; ++column)
        {
            cout << ticTacToeGrid.at(row).at(column) << "\t";
        }
        cout << "\n";
    }
}

void updateTheGrid(vector<vector<char>>& ticTacToeGrid, char theMovePosition, char playerSymbol)
{
    switch (theMovePosition)
    {
    case '1':
        ticTacToeGrid[0][0] = playerSymbol;
        break;

    case '2':
        ticTacToeGrid[0][1] = playerSymbol;
        break;

    case '3':
        ticTacToeGrid[0][2] = playerSymbol;
        break;

    case '4':
        ticTacToeGrid[1][0] = playerSymbol;
        break;

    case '5':
        ticTacToeGrid[1][1] = playerSymbol;
        break;

    case '6':
        ticTacToeGrid[1][2] = playerSymbol;
        break;

    case '7':
        ticTacToeGrid[2][0] = playerSymbol;
        break;

    case '8':
        ticTacToeGrid[2][1] = playerSymbol;
        break;

    case '9':
        ticTacToeGrid[2][2] = playerSymbol;
        break;
    }
}

bool winChecker(vector<vector<char>> grid)
{
    // Row 'X'
    if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
    {
        return true;
    }

    if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X')
    {
        return true;
    }

    if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X')
    {
        return true;
    }

    // Col 'X'
    if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X')
    {
        return true;
    }

    if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X')
    {
        return true;
    }

    if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X')
    {
        return true;
    }

    // Diag 'X'
    if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X')
        return true;

    if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X')
    {
        return true;
    }

    // Row 'O'
    if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O')
    {
        return true;
    }

    if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O')
    {
        return true;
    }

    if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O')
    {
        return true;
    }

    // Col 'O'
    if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O')
    {
        return true;
    }

    if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O')
    {
        return true;
    }

    if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O')
    {
        return true;
    }

    // Diag 'O'
    if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O')
    {
        return true;
    }

    if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O')
    {
        return true;
    }
}

bool drawChecker(vector<vector<char>> grid)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            if (grid[row][column] != 'X' && grid[row][column] != 'O') //Nothing match up
            {
                return false;
            }
        }
    }
    return true;
}

bool moveRequirement(vector<vector<char>>& ticTacToeGrid, char theMovePosition)
{
    if (theMovePosition < '1' || theMovePosition > '9') //Other than 1-9, it will give an error
    {
        return false;
    }
        
    int row = (theMovePosition - '1') / 3;

    int col = (theMovePosition - '1') % 3;

    if (ticTacToeGrid[row][col] == 'X' || ticTacToeGrid[row][col] == 'O') //Is the position taken or not?
    {
        return false;
    }

    return true;
}

int main()
{
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y')
    {
        int p1 = 0;
        int p2 = 0;

        vector<vector<char>> ticTacToeGrid =
        {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'},
        };

        printTheGrid(ticTacToeGrid);

        int moveCount = 0;
        char currentPlayer = 'X'; //Default symbol

        while (moveCount < 9)
        {
            if (currentPlayer == 'X')
            {
                cout << "Player 1 (X), choose 1-9: \n";
            }

            else
            {
                cout << "Player 2 (O), choose 1-9: \n";
            }

            char move;
            cin >> move;

            if (moveRequirement(ticTacToeGrid, move) == false)
            {
                cout << "\nThat position is already taken or you input is wrong. Try again and pay attention!\n";

                system("pause");

                system("cls"); //Clear the screen for better view o.O

                printTheGrid(ticTacToeGrid);

                continue; //Ask for input again without skipping turn
            }

            updateTheGrid(ticTacToeGrid, move, currentPlayer);

            system("cls");

            printTheGrid(ticTacToeGrid);

            if (winChecker(ticTacToeGrid) == true)
            {
                if (currentPlayer == 'X')
                {
                    cout << "\nPlayer 1 DEMOLISHED the Game!\n";
                }

                else
                {
                    cout << "\nPlayer 2 CRUSHED the Game!\n";
                }

                break;
            }

            moveCount++;

            if (currentPlayer == 'X') //Change symbol after turn
            {
                currentPlayer = 'O';
            }

            else
            {
                currentPlayer = 'X';
            }

        }

        if (moveCount == 9)
        {
            cout << "\nIt is a draw! Back to High Noon!\n";
        }

        cout << "\nDo you want to play again? (y/n): ";

        cin >> playAgain;

        system("cls");
    }

    cout << "Thank you for playing the game. Try again later if you want to have more fun.\n";

    return 0;
}
