#include "LMS.h"
#include <iostream>
using namespace std;
class Course;
class Student;
LMS::LMS(string name) {
    this->name = name;
}
void LMS::addCourse(Course course) {
    this->courses.push_back(course);
}
void LMS::addStudent(Student student) {
    students.push_back(student);
}
void LMS::addStudentToCourse(int student_id, int course_id) {
    for (int i = 0; i < this->courses.size(); i++) {
        if (courses[i].getId() == course_id) {
            for (int j = 0; j < this->students.size(); j++) {
                if (student_id == this->students[j].getId()) {
                    courses[i].addStudent(students[j]);
                    students[j].takeCourse(courses[i]);
                }
            }
        }
    }
}
void LMS::printDetails() {
    cout<<"LMS Name: "<<this->name<<endl;
    cout<<"Students: "<<endl;
    for (auto student : this->students) {
        student.printDetails();
    }
    cout<<"Courses: "<<endl;
    for (auto course : this->courses) {
        course.printDetails();
    }
}


