#include "Student.h"

int main()
{
    vector <Student> students(2);
    int studentCount = 0;

    for (Student &s : students)
    {
        s.GetStudentInfo();
        s.DisplayStudentInfo(studentCount);
    }

    return 0;
}