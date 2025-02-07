#ifndef LMS_H
#define LMS_H
#include <string>
#include <vector>
#include <algorithm>
#include "Course.h"
#include "Student.h"
using namespace std;

class LMS {
    string name;
    vector<Course> courses;
    vector<Student> students;
    public:
    LMS(string name);
    void addCourse(Course);
    void addStudent(Student);
    void addStudentToCourse(int student_id, int course_id);
    void printDetails();
};
#endif //LMS_H
