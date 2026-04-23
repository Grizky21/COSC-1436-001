#include <iostream>
#include <Windows.h>

using namespace std;

void doStuff()
{ 
	cout << "Time for Calculation and Record the Result\n";

}
void pauseForSeconds()
{
	Sleep(10'000); // Sleep for 10 seconds (10'000 milliseconds)
}

int main()
{
	cout << "Hello Student\n";

	doStuff();

	system("pause");

	system("start https://www.youtube.com/watch?v=tTomwopxKFE&pp=ygUJYWxnZWJyYSAx"); // Opens Algebra 1 Video on YouTube

	pauseForSeconds();

	system("calc");

	system("notepad");

	return 0;
}