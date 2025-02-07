#include <iostream>
#include "Course.h"

#include "Student.h"
using namespace std;

Course::Course(int id, string name, int credits) {
    this->id = id;
    this->name = name;
    this->credits = credits;
}
int Course::getId() const {
    return id;
}
string Course::getName() const {
    return name;
}
int Course::getCredits() const {
    return credits;
}
bool Course::hasStudent(Student student) {
    for (int k:students) {
        if (k==student.getId()) {
            return true;
        }
    }
    return false;

}
bool Course::addStudent(const Student& student) {
    if (!hasStudent(student)) {
        students.push_back(student.getId());
        return true;
    }
    return false;

}
void Course::printDetails() {
    cout<<"Course ID: "<<id<<", Name: "<<name<<", Credits: "<<credits<<endl;
    cout<<"Enrolled Students: ";
    for (int k:students) {
        cout<<k<<" ";
    }
    cout<<endl;

}


