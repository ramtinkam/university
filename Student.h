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
        Student();
        Student(string ,string ,string ,double ,Course*,string,int);
        Student(const Student&);
        ~Student();
        Course* getcourses()const;
        string getFieldOfStudy()const;
        int getnumOfCourses()const;
        void setFieldOfStudy(string);
        void setnumOfCourses(int);
        void setCourses(Course*);
        friend ostream& operator <<(ostream& ,const Student&);
        friend istream& operator >>(istream& ,Student&);

    };




#endif