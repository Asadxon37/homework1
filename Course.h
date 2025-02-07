#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
using namespace std;

class Student;
class Course {
    int id;
    string name;
    int credits;
    vector<int> students;
    public:
    Course(int id, string name, int credits);

    int getId()const;
    string getName()const;
    int getCredits()const;
    bool hasStudent(Student);
    bool addStudent(const Student& student);
    bool dropStudent(Student);
    void printDetails();


};
#endif //COURSE_H
