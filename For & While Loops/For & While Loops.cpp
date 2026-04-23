#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main() 
{
    string filename = "Lyrics.txt";

    string line;

    ifstream part1(filename);

    ifstream part2(filename);

    int totalLines = 0;

    cout << "Enjoy this music from Linkin Park!\n\n\n";

    if (!part1.is_open()) 
    {
        cout << "Error: Could not open " << filename << "\n";

        return 0;

    }

    else
    {
        for (int i = 0; i < 10; i++)
        {
            if (getline(part1, line))
            {
                cout << line << "\n\n";
            }
        }

        while (getline(part2, line))
        {
            cout << "\n" << line;

            totalLines++;
        }
    }

    cout << "\n\nTotal number of lines in the file: " << totalLines << "\n";

    return 0;
}