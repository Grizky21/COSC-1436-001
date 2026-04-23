#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    constexpr int COLUMN_WIDTH = 5;
   
    for (int outerCounter = 1; outerCounter <= 10; ++outerCounter)
    {
        for (int innerCounter = 1; innerCounter <= 10; ++innerCounter)
        {
            //cout << "Inner counter is: " << innerCounter << " and Outer counter is: " << outerCounter << "\n";
            cout << left << setw(COLUMN_WIDTH) << innerCounter * outerCounter; // "\t" For table column instead of "setw()"
        }
        cout << "\n";
    }
}
