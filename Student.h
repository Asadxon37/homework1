#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

class Course;
class Student {
    int id;
    string name;
    vector<int> enrolledCourses;
    const int MAX_ALLOWED_CREDITS = 18;
    public:
    int total_credits;
    Student(int id, string name);

    int getId() const;
    string getName() const;
    vector<int> getEnrolledCourses() const;

    bool takesCourse(Course);
    bool takeCourse(Course);
    void dropCourse(Course);
    void printDetails();
};
#endif //STUDENT_H
