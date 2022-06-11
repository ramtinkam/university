#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include "Person.h"
#include <string>

using namespace std;

    class Student : public Person{
        private:
        Course* courses;
        string FieldOfStudy;
        int numOfCourses;
        public:
        Student(string ,string ,string ,double ,Course*,string,int);
        Student(const Student&);
        ~Student();

    };




#endif