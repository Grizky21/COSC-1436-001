#include <iostream>
#include <fstream>

using namespace std;

int calculateStudentScore()
{
	
	int examAverage = 85;
	int homeworkAverage = 100;
	int projectAverage = 75;
	int attendanceAverage = 50;

	const float EXAM_WEIGHT = 0.50;
	const float HOMEWORK_WEIGHT = 0.20;
	const float PROJECT_WEIGHT = 0.20;
	const float ATTENDANCE_WEIGHT = 0.10;


	float overallAverage =
		examAverage * EXAM_WEIGHT +
		homeworkAverage * HOMEWORK_WEIGHT +
		projectAverage * PROJECT_WEIGHT +
		attendanceAverage * ATTENDANCE_WEIGHT;

	return overallAverage;

}

int main()
{
	int studentScore = calculateStudentScore();

	std::cout << "Student score is: " << studentScore << "\n";
}
