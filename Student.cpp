//
// Created by ekalb on 3/25/2025.
//

#include "Student.h"

Student::Student()
{
    id           = " ";
    grade        = ' ';
    studentName  = " ";
}

void Student::GetStudentInfo()
{
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student ID#: ";
    getline(cin, id);

    cout << "Enter student letter grade: ";
    cin.get(grade);

    cin.ignore();
}

string Student::ReturnID() const
{
    return id;
}

string Student::ReturnStudentName() const
{
    return studentName;
}

char Student::ReturnGrade() const
{
    return grade;
}

void Student::DisplayStudentInfo(int &studentCount) const
{
    cout << "Student #"  << studentCount + 1 << endl
         << "\tName: "   << studentName      << endl
         << "\tID: "     << id               << endl
         << "\tGrade: "  << grade            << endl
         << endl;

    studentCount++;
}