#include <iostream>
#include <cstring>
using namespace std;

 struct STUDENT {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main() {
    STUDENT student;

    cout << "Enter student details: \n";
    cout << "Name: ";
    cin.getline(student.name, 50);
    cout << "Roll Number: ";
    cin >> student.rollNumber;
    cout << "Enter marks for 5 subjects: \n";

    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> student.marks[i];
        student.totalMarks += student.marks[i];
    }

    cout << "\nStudent details: \n";
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": " << student.marks[i] << endl;
        }
    cout << "Total Marks: " << student.totalMarks << endl;

    return 0;
}