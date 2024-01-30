#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<std::string> studentNames;
    vector<double> studentGrades;

    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the grade for " << name << ": ";
        cin >> grade;

        studentNames.push_back(name);
        studentGrades.push_back(grade);
    }

    double sum = 0.0;
    double average;
    double highestGrade = *std::max_element(studentGrades.begin(), studentGrades.end());
    double lowestGrade = *std::min_element(studentGrades.begin(), studentGrades.end());

    for (double grade : studentGrades) {
        sum += grade;
    }

    if (numStudents > 0) {
        average = sum / numStudents;

        cout << "\nAverage Grade: " << average << std::endl;
        cout << "Highest Grade: " << highestGrade << std::endl;
        cout << "Lowest Grade: " << lowestGrade << std::endl;
    } else {
        cout << "No students entered. Exiting.\n";
    }

    return 0;
}
