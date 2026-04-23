#include <iostream>
#include <vector>

#include "Date.h"

void printDates(vector <Date> dates)
{
    for (int i = 0; i < dates.size(); ++i)
    {
        dates[i].print();
    }
}


using namespace std;

int main()
{
    Date myBirthday = { "May", 13, 1988 };
    Date yourBirthday = { "December", 31, 2000 };

    vector <Date> dates =
    {
        myBirthday,
        yourBirthday,
        {"July", 4, 1776}
    };

    printDates(dates);

    //dates[0].print();
}
