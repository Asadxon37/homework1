#include <iostream>
#include "Student.h"
#include "Course.h"
#include <algorithm>
using namespace std;

Student::Student(int id, string name) {
    this->id = id;
    this->name = name;
    this->total_credits = 0;
}
int Student::getId() const {
    return id;
}
string Student::getName() const {
    return name;
}
vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}
bool Student::takeCourse(Course course) {
    if (takeCourse(course)) {
        return false;
    }
    if (course.getCredits()+this->total_credits <=MAX_ALLOWED_CREDITS) {
        total_credits += course.getCredits();
        enrolledCourses.push_back(course.getCredits()) {
            return true;
        }
    }
    return false;
}
void Student::dropCourse(Course course) {
    enrolledCourses.erase(remove(enrolledCourses.begin(), enrolledCourses.end(), course.getCredits()),enrolledCourses.end());
}
void Student::takeCourse(Course course) {
    cout<<"Student ID: "<<id<<", Name: "<<name<<endl;
    cout<<"Enrolled Courses: ";
    for (int i=0; i<enrolledCourses.size(); i++) {
        cout<<enrolledCourses[i]<<" ";
    }
    cout<<endl;
}