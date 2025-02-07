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
    for (Course& course : courses) {
        if (course.getId() == course_id) {
            for (Student& student : students) {
                if (student.getId() == student_id) {
                    course.addStudent(student);
                    student.takeCourse(course);
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


