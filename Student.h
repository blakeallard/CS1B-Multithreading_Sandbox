//
// Created by ekalb on 3/25/2025.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Student
{
private:
    string id;
    char   grade;
    string studentName;

public:

    Student();

    void   GetStudentInfo();
    string ReturnID() const;
    string ReturnStudentName() const;
    char   ReturnGrade() const;
    void   DisplayStudentInfo(int &studentCount) const;

};



#endif //STUDENT_H
