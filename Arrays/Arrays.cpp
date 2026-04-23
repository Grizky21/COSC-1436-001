/**/
#include <iostream>


#include"utils.h"


using namespace std;


int main()
{
    //string absoluteFilename = "C:\Users\Grizk\Downloads\Fundamental Programming 1\Calculator_Sol\Arrays";
    string relativeFilename = "studentRoster.txt";

    vector<string> studentList = getTheStudentList(relativeFilename);

    string longestName = findLongestName(studentList);

    //cout << randomName << endl;
}
