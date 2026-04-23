#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string player1, player2;

    cout << "Player 1, enter your choice (Rock, Paper or Scissors): \n";
    cin >> player1;

    for (int i = 0; i < 50; i++) cout << "\n";

    cout << "Player 2, enter your choice (Rock, Paper or Scissors): \n";
    cin >> player2;

    if (player1 == player2) 
    {
            cout << "\nIt's a TIE!\n";
    }
    else if (player1 == "Rock") 
    {
        if (player2 == "Scissors")
            cout << "\nPlayer 1 WIN! Rock beats scissors.\n";
        else
            cout << "\nPlayer 2 WIN! Paper beats rock.\n";
    }
    else if (player1 == "Paper") 
    {
        if (player2 == "Rock")
            cout << "\nPlayer 1 WIN! Paper beats rock.\n";
        else
            cout << "\nPlayer 2 WIN! Scissors beat paper.\n";
    }
    else if (player1 == "Scissors") 
    {
        if (player2 == "Paper")
            cout << "\nPlayer 1 WIN! Scissors beat paper.\n";
        else
            cout << "\nPlayer 2 WIN! Rock beats scissors.\n";
    }
    else 
    {
        cout << "\nInvalid input! Please type the right KEYWORD and it is Case-Sensitive.\n";
    }

    return 0;
}