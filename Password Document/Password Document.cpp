#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string filename = "Tester.txt";
    
    string password = "Openit@123"; 
    
    string input;
    
    string line;

    ifstream file1(filename);

    char choice;
   
    int attempts = 0;

    cout << "Would you like to view the document? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') 
    {

        while (attempts < 3) 
        {
            cout << "Enter password: ";
            cin >> input;

            if (input == password) 
            {          
                if (!file1.is_open())
                {
                    cout << "Error: Could not open " << filename << "\n";

                    return 0;
                }

                else
                {
                    while (getline(file1, line))
                    {
                        cout << line << "\n";
                    }

                    return 0;
                }
            }

            else 
            {
                attempts++;

                cout << "Try Again. Attempts left: " << (3 - attempts) << "\n";
            }
        }

        cout << "Failed attempts and terminating the program now." << "\n";
    }

    return 0;
}
