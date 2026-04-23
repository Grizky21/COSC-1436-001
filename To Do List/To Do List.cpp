#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> toDoList
    {

    };

    int input;
    int index;
    string task;


    while (true) 
    {
        cout << "\nWhat do you want to do?\n" << "1. Add Task\n" << "2. Remove Task\n" << "3. Show List\n" << "4. Exit\n" << "Enter choice: ";

        cin >> input;
        cin.ignore();

        if (input == 1)
        {
            cout << "\nEnter task: ";

            getline(cin, task);

            toDoList.push_back(task);

            cout << "\nTask added!\n";
        }

        else if (input == 2)
        {
            if (toDoList.empty())
            {
                cout << "\nList is empty!\n";
            }

            else
            {
                cout << "\nEnter task number to remove (1-" << toDoList.size() << "): ";

                cin >> index;

                toDoList.erase(toDoList.begin() + (index - 1));

                cout << "\nTask removed.\n";
            }
        }

        else if (input == 3)
        {
            if (toDoList.empty())
            {
                cout << "\nList is empty!\n";
            }

            else
            {
                cout << "\nTo Do List:\n";

                for (int i = 0; i < toDoList.size(); ++i)
                {
                    cout << i + 1 << ". " << toDoList[i] << "\n";
                }
            }
        }

        else if (input == 4)
        {
            return 0;
        }

        else
        {
            cout << "\nInvalid choice. The choice is between 1 - 4. Try again and read well this time.\n";
        }
    }

    return 0;
}
