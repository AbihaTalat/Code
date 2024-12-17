#include <iostream>
#include <string>
using namespace std;

// Define a structure to hold student details
struct Student {
    string name;
    int rollNumber;
    float marks[3]; // Array to store marks for three subjects
};

int main() {
    Student stud;
    float totalMarks = 0;

    // Input student details
    cout << "Enter student name: ";
    getline(cin, stud.name);
    cout << "Enter roll number: ";
    cin >> stud.rollNumber;
    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> stud.marks[i];
        totalMarks += stud.marks[i];
    }

    // Display student details and total marks
    cout << "\n=== Student Details ===" << endl;
    cout << "Name: " << stud.name << endl;
    cout << "Roll Number: " << stud.rollNumber << endl;
    cout << "Marks: " << stud.marks[0] << ", " << stud.marks[1] << ", " << stud.marks[2] << endl;
    cout << "Total Marks: " << totalMarks << endl;

    return 0;
}
